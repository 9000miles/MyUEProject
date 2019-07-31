// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TickObject.h"
#include "GameFramework\Actor.h"
#include "ManagerBase.generated.h"

UCLASS(config = Game, BlueprintType, Blueprintable)
class UManagerBase : public UTickObject
{
	GENERATED_BODY()

public:
	UManagerBase();

	UPROPERTY(EditAnywhere, Category = "ManagerBase")
		TSubclassOf<AActor> ActorClass;

	UPROPERTY(BlueprintReadOnly, Category = "ManagerBase")
		AActor* Actor;

public:

	UFUNCTION(BlueprintNativeEvent, Category = "ManagerBase")
	//UFUNCTION(BlueprintImplementableEvent, Category = "ManagerBase")
		void InitManager();

	UFUNCTION(BlueprintCallable, Category = "ManagerBase")
		void CheckActor();
};