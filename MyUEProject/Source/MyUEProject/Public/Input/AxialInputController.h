#pragma once

#include "CoreMinimal.h"
#include "TickObject.h"
#include "IInputReceiveTarget.h"
#include "GameFramework\Actor.h"
#include "InputAxisComponent.h"
#include "DelegateCombinations.h"
#include "AxialInputController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInputAxisValueDelegate_Con, float, VerticalValue, float, HorzontalValue);

UCLASS(Blueprintable)
class MYUEPROJECT_API AAxialInputController :public AActor//, public IInputReceiveTarget
{
	GENERATED_BODY()

public:
	float Speed;
	float DelayTime;
	bool bCanContinuousChange;

	//UInputAxisComponent VerticalInput;
	//UInputAxisComponent HorzontalInput;
	FInputAxisValueDelegate_Con OnAxisValue;

	virtual void Destroyed() override;
	//
	//public:
	//
	//	virtual void ReceiveKey_Implementation(EInputKey::Type Key, bool Pressed) override;
	//	virtual void ReceiveAxis_Implementation(float MoveForwardAxis, float MoveRightAxis, float LookUpAxis, float LookRateAxis) override;

protected:
	virtual void BeginPlay() override;

};
