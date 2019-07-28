// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TickObject.h"
#include "ManagerBase.generated.h"

UCLASS(config = Game, BlueprintType, Blueprintable)
class UManagerBase : public UTickObject
{
	GENERATED_BODY()

public:
	UManagerBase();

	//UFUNCTION(BlueprintNativeEvent, Category = "ManagerBase")
	UFUNCTION(BlueprintImplementableEvent, Category = "ManagerBase")
		void Init();
};