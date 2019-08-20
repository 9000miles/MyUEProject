// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Object.h"
#include "Tickable.h"
#include "ObjectMacros.h"
#include "TickObject.generated.h"

UCLASS(config = Game, BlueprintType, Blueprintable)
class UTickObject : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:

	UTickObject();

	// Í¨¹ý FTickableGameObject ¼Ì³Ð

	//UFUNCTION(BlueprintNativeEvent, Category = "TickObject")
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "TickObject")
		void InitObject();

	UFUNCTION(BlueprintImplementableEvent, Category = "TickObject")
		void TickFunction(float DeltaTime);

	virtual TStatId GetStatId() const override;
};