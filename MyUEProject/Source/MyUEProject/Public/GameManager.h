// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Tickable.h"
#include "Engine.h"
#include "ManagerBase.h"
#include "GameInstanceSubsystem.h"
#include "GameManager.generated.h"

UCLASS(config = Game)
class UGameManager : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:

	UGameManager();

	UPROPERTY(BlueprintReadWrite, Category = "Test")
		int32 Index;

	UPROPERTY(BlueprintReadOnly, Category = "GameManager")
		TMap<FName, UManagerBase*> ManagerMap;

public:
	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void AddManager(FName Name, UManagerBase* Manager);

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		UManagerBase* GetManager(FName Name);

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void RemoveManager(FName Name);

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void RemoveAll();

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void Test();

	/** STATIC */
public:

	/** Get the global GameManager*/
	UFUNCTION(BlueprintPure, Category = "GameManager", meta = (WorldContext = "ContextObject", DeprecatedFunction, DeprecationMessage = "Use 'Get GameManager' instead"))
		static UGameManager* GetGameManager(const UObject* ContextObject)
	{
		UWorld* World = GEngine->GetWorldFromContextObject(ContextObject, EGetWorldErrorMode::LogAndReturnNull);

		const UGameInstance* GI = World ? World->GetGameInstance() : nullptr;
		return UGameInstance::GetSubsystem<UGameManager>(GI);
	}

	// Í¨¹ý FTickableGameObject ¼Ì³Ð
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
};