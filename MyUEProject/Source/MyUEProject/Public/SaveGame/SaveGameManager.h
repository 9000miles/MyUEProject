// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Tickable.h"
#include "Engine.h"
#include "Map.h"
#include "SaveGameData.h"
#include "SaveGameInstance.h"
#include "GameInstanceSubsystem.h"
#include "SaveGameDataValueBase.h"
#include "SaveGameManager.generated.h"

UCLASS(config = Game)
class USaveGameManager : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "SaveGameManager")
		TMap<FString, USaveGameData*> SaveDataMap;

	UPROPERTY(BlueprintReadOnly, Category = "SaveGameManager")
		USaveGameInstance* CurSaveGameInstance;

	UPROPERTY(BlueprintReadOnly, Category = "SaveGameManager")
		TArray<FString> GroupSortNames;

	UPROPERTY(BlueprintReadOnly, Category = "SaveGameManager")
		bool bNeedsToBeSaved;

private:
	TMap<FString, TArray<USaveGameData*>> GroupSaveDataMap;

public:
	USaveGameManager();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

public:
	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		bool SaveGameData(const FString& SlotName, const int32 UserIndex);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void LoadGameData(const FString& SlotName, const int32 UserIndex);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		FString SaveDataMapToString();

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void StringToSaveDataMap(FString DataString);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		bool AddSaveData(FString DataName, ESaveGameDataType::Type DataType, FString ValueString, FString DataGroup = "Default");

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		bool SetSaveDataValue(FString DataName, ESaveGameDataType::Type DataType, FString ValueString, FString DataGroup = "Default", bool SetDataGroup = false);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		FString GetSaveDataValueString(FString DataName, ESaveGameDataType::Type DataType) const;

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		USaveGameDataValueBase* GetSaveDataValue(FString DataName, ESaveGameDataType::Type DataType) const;

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		TArray<USaveGameData*> GetGroupSaveData(FString DataGroup) const;

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		bool RemoveSaveData(FString DataName, ESaveGameDataType::Type DataType);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		bool DeleteGameData(FString SlotName, int32 UserIndex);

	UFUNCTION(BlueprintCallable, Category = "SaveGameManager")
		void ClearAll();

	/** STATIC */
public:

	/** Get the global GameManager*/
	UFUNCTION(BlueprintPure, Category = "SaveGameManager", meta = (WorldContext = "ContextObject", DeprecatedFunction, DeprecationMessage = "Use 'Get SaveGameManager' instead"))
		static USaveGameManager* SaveGameManager(const UObject* ContextObject)
	{
		UWorld* World = GEngine->GetWorldFromContextObject(ContextObject, EGetWorldErrorMode::LogAndReturnNull);

		const UGameInstance* GI = World ? World->GetGameInstance() : nullptr;
		return UGameInstance::GetSubsystem<USaveGameManager>(GI);
	}

#if WITH_EDITOR
	UFUNCTION(BlueprintPure)
		static USaveGameManager* GetSaveGameManager();
#endif

	// Í¨¹ý FTickableGameObject ¼Ì³Ð
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;

private:
	void UpdateGroupSaveDataMap();
	static USaveGameManager* Singleton;
};