#include "InputAxisComponent.h"
#include "Object.h"
#include "Components\ActorComponent.h"
#include "openexr\Deploy\include\ImathMath.h"

void UInputAxisComponent::InitializeComponent()
{
}

void UInputAxisComponent::BeginPlay()
{
}

UInputAxisComponent::UInputAxisComponent()
{
	SetVariable(0.5f, 0.1f, true);
}

void UInputAxisComponent::InputKey(bool bIsPositiveKeyDown, bool bIsNegativeKeyDown, bool bIsPressed)
{
	bIsPositiveKeyPressed = false;
	bIsNegativeKeyPressed = false;

	if (bIsPositiveKeyDown&&bIsPressed)
	{
		bIsPositiveKeyPressed = true;
		bIsNegativeKeyPressed = false;
		OnAxisValue.Broadcast(1);
	}

	if (bIsNegativeKeyDown&&bIsPressed)
	{
		bIsPositiveKeyPressed = false;
		bIsNegativeKeyPressed = true;
		OnAxisValue.Broadcast(-1);
	}

	bIsKeyEvent = true;
	KeyStartTime = GetWorld()->GetTimeSeconds();
}

void UInputAxisComponent::InputAxis(float Axis)
{
	if (Axis <= AxisMin && bIsAxisMiddle)
	{
		bIsAxisMiddle = false;
		bIsArrivedPositive = false;
		bIsArrivedNegative = true;
		if (!bHasCallEvent)
		{
			OnAxisValue.Broadcast(-1);

			bHasCallEvent = true;
			bIsKeyEvent = false;
			KeyStartTime = GetWorld()->GetTimeSeconds();
		}
	}

	if (Axis <= AxisMax && bIsAxisMiddle)
	{
		bIsAxisMiddle = false;
		bIsArrivedPositive = true;
		bIsArrivedNegative = false;
		if (!bHasCallEvent)
		{
			OnAxisValue.Broadcast(1);

			bHasCallEvent = true;
			bIsKeyEvent = false;
			KeyStartTime = GetWorld()->GetTimeSeconds();
		}
	}

	struct MyStruct
	{

	};
	if (FMath::Abs(Axis) <= AxisMiddleValue)
	{
		bIsAxisMiddle = true;
		bIsArrivedPositive = false;
		bIsArrivedNegative = false;
		bHasCallEvent = false;

		OnAxisValue.Broadcast(0);
	}

	bIsCurPositiveSide = Axis <= AxisMin && bIsAxisMiddle;
	if (bIsCurPositiveSide != bLastSide)
	{
		bLastSide = bIsCurPositiveSide;
		bIsAxisMiddle = true;
	}
	else
	{
		OnAxisValue.Broadcast(0);
	}
}

void UInputAxisComponent::SetVariable(float _DelayTime, float _Speed, bool _bCanContinuousChange)
{
	this->DelayTime = _DelayTime;
	this->Speed = _Speed;
	this->bCanContinuousChange = _bCanContinuousChange;
}

