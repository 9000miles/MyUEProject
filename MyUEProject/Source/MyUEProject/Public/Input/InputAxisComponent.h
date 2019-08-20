#pragma once

#include "CoreMinimal.h"
#include "TickObject.h"
#include "DelegateCombinations.h"
#include "InputAxisComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputAxisValueDelegate_Com, float, AxisValue);

UCLASS(Blueprintable)
class MYUEPROJECT_API UInputAxisComponent :public UActorComponent
{
	GENERATED_BODY()

public:

	float DelayTime;

	float Speed;

	float bCanContinuousChange;

	UPROPERTY(BlueprintAssignable)
		FInputAxisValueDelegate_Com OnAxisValue;


	virtual void InitializeComponent() override;


	virtual void BeginPlay() override;

private:
	bool bIsPositiveKeyPressed;
	bool bIsNegativeKeyPressed;
	float AxisMiddleValue;
	bool bIsAxisMiddle;
	bool bIsArrivedPositive;
	bool bIsArrivedNegative;
	bool bIsCurPositiveSide;
	bool bLastSide;
	bool bHasCallEvent;
	bool bIsKeyEvent;

	float AxisMin;
	float AxisMax;
	float KeyStartTime;
	float AxisStartTime;
	float KeyDeltaValue;
	float AxisDeltaValue;

public:
	UInputAxisComponent();

	void InputKey(bool bIsPositiveKeyDown, bool bIsNegativeKeyDown, bool bIsPressed);

	void InputAxis(float Axis);

	void SetVariable(float DelayTime, float Speed, bool bCanContinuousChange);

};
