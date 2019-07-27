// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Object.h"
#include "Tickable.h"
#include "ObjectMacros.h"
#include "TickObjectTest.generated.h"

UCLASS(config = Game)
class UTickObjectTest : public UObject
{
	GENERATED_BODY()

public:

	UTickObjectTest();

	// Í¨¹ý FTickableGameObject ¼Ì³Ð

	////UFUNCTION(BlueprintNativeEvent, Category = "TickObjectTest")
	//virtual void Tick(float DeltaTime) override;

	////UFUNCTION(BlueprintNativeEvent, Category = "TickObjectTest")
	////	void TickFunction(float DeltaTime);

	//virtual TStatId GetStatId() const override;

};