// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Interface.h"
#include "InputReceiveTarget.generated.h"

UENUM(BlueprintType)
namespace EInputReceiveKey
{
	enum Type
	{
		Direction_Left,
		Direction_Right,
		Direction_Up,
		Direction_Down,
		Jump,
		Crouch,
		Fire,
		Wlak,
	};
}

/** Interface for actors which can be selected */
UINTERFACE(Blueprintable)
class UInputReceiveTarget : public UInterface
{
	GENERATED_BODY()
};

class IInputReceiveTarget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Input Receive Interface")
		void ReceiveKey(EInputReceiveKey::Type Key, bool Pressed);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Input Receive Interface")
		void ReceiveAxis(float MoveForwardAxis, float MoveRightAxis, float LookUpAxis, float LookRateAxis);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Input Receive Interface")
		void ReceiveDownKeys(TArray<EInputReceiveKey::Type> Keys);
};