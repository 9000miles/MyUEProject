// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework\Actor.h"
#include "ManagerBase.generated.h"

UCLASS(config = Game, BlueprintType, Blueprintable)
class AManagerBase : public AActor
{
	GENERATED_BODY()

public:
	AManagerBase();

	virtual void Tick(float DeltaSeconds) override;

public:
	UFUNCTION(BlueprintNativeEvent, Category = "ManagerBase")
		void InitManager();

	UFUNCTION(BlueprintNativeEvent, Category = "ManagerBase")
		void TickFunction(float DeltaTime);
};