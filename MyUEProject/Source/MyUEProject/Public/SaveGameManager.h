// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Tickable.h"
#include "Engine.h"
#include "Map.h"
#include "SaveGameData.h"
#include "SaveGameInstance.h"
#include "GameInstanceSubsystem.h"
#include "SaveGameManager.generated.h"

UCLASS(config = Game)
class USaveGameManager : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:

	TSubclassOf<USaveGame> SaveGameClass;

	UPROPERTY(BlueprintReadOnly, Category = "SaveGameManager")
		TMap<FString, USaveGameData*> SaveDataMap;

	UPROPERTY(BlueprintReadOnly, Category = "SaveGameManager")
		USaveGameInstance* CurSaveGameInstance;

	UPROPERTY(BlueprintReadOnly, Category = "SaveGameManager")
		FString CurSlotName;

	UPROPERTY(BlueprintReadOnly, Category = "SaveGameManager")
		int32 CurUserIndex;
public:

	USaveGameManager();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;
public:

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void SaveGameData(FString SlotName, int32 UserIndex);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void LoadGameData(FString SlotName, int32 UserIndex);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		FString SaveDataMapToString();

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void StringToSaveDataMap(FString DataString);

#pragma region AddSaveData

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void AddStringSaveData(FString DataName, ESaveGameDataType::Type DataType, FString StringData);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void AddInt32SaveData(FString DataName, ESaveGameDataType::Type DataType, int32 Int32Data);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void AddFloatSaveData(FString DataName, ESaveGameDataType::Type DataType, float FloatData);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void AddBoolSaveData(FString DataName, ESaveGameDataType::Type DataType, bool BoolData);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void AddVectorSaveData(FString DataName, ESaveGameDataType::Type DataType, FVector VectorData);

#pragma endregion

#pragma region SetSaveData

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void SetStringSaveData(FString DataName, ESaveGameDataType::Type DataType, FString StringData);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void SetInt32SaveData(FString DataName, ESaveGameDataType::Type DataType, int32 Int32Data);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void SetFloatSaveData(FString DataName, ESaveGameDataType::Type DataType, float FloatData);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void SetBoolSaveData(FString DataName, ESaveGameDataType::Type DataType, bool BoolData);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void SetVectorSaveData(FString DataName, ESaveGameDataType::Type DataType, FVector VectorData);

#pragma endregion

#pragma region GetSaveData

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		USaveGameData* GetSaveData(FString SlotName, ESaveGameDataType::Type DataType) const;

#pragma endregion

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void RemoveGameData(FString SlotName);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void DeleteGameData(FString SlotName, int32 UserIndex);

	/** STATIC */
public:

	/** Get the global GameManager*/
	UFUNCTION(BlueprintPure, Category = "SaveGameManager", meta = (WorldContext = "ContextObject", DeprecatedFunction, DeprecationMessage = "Use 'Get SaveGameManager' instead"))
		static USaveGameManager* GetGameManager(const UObject* ContextObject)
	{
		UWorld* World = GEngine->GetWorldFromContextObject(ContextObject, EGetWorldErrorMode::LogAndReturnNull);

		const UGameInstance* GI = World ? World->GetGameInstance() : nullptr;
		return UGameInstance::GetSubsystem<USaveGameManager>(GI);
	}

	// Í¨¹ý FTickableGameObject ¼Ì³Ð
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
};