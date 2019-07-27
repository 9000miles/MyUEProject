// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Tickable.h"
#include "GameInstanceSubsystem.h"
#include "Engine.h"
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
		TArray<AActor*> Managers;

public:
	UFUNCTION(BlueprintCallable, Category = "Test")
		void AddManager(FString ManagerName);
	UFUNCTION(BlueprintCallable, Category = "Test")
		void RemoveManager(FString ManagerName);
	UFUNCTION(BlueprintCallable, Category = "Test")
		void RemoveAll();
	UFUNCTION(BlueprintCallable, Category = "Test")
		void TickManager();
	//UFUNCTION(BlueprintCallable, Category = "Test")
	//	void Test();
	//UFUNCTION(BlueprintCallable, Category = "Test")
	//	void Test();

	UFUNCTION(BlueprintCallable, Category = "Test")
		void Test();

	/** STATIC */
public:

	/** Get the global manager system*/
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