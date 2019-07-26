// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Tickable.h"
#include "GameInstanceSubsystem.h"
#include "Engine.h"
#include "ManagerSystem.generated.h"

UCLASS(config = Game)
class UManagerSystem : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:

	UManagerSystem();



	/** STATIC */
public:

	/** Get the global manager system*/
	UFUNCTION(BlueprintPure, Category = "ManagerSystem", meta = (WorldContext = "ContextObject", DeprecatedFunction, DeprecationMessage = "Use 'Get Manager System' instead"))
		static UManagerSystem* GetManagerSystem(const UObject* ContextObject)
	{
		UWorld* World = GEngine->GetWorldFromContextObject(ContextObject, EGetWorldErrorMode::LogAndReturnNull);

		const UGameInstance* GI = World ? World->GetGameInstance() : nullptr;
		return UGameInstance::GetSubsystem<UManagerSystem>(GI);
	}

	// Í¨¹ý FTickableGameObject ¼Ì³Ð
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
};