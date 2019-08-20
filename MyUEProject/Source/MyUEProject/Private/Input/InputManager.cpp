// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\Input\InputManager.h"

//void AInputManager::InitManager()
//{
//}

// Sets default values
AInputManager::AInputManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//void AInputManager::RegistorTarget(IInputReceiveTarget* Target)
//{
//	if (InputKeys.Num() <= 0)
//	{
//		InputTargets.AddUnique(*Target);
//	}
//	else
//	{
//		if (!InputTargetCaches.Contains(*Target))
//		{
//			InputTargetCaches.AddUnique(*Target);
//		}
//	}
//}
//
//void AInputManager::UnregistorTarget(IInputReceiveTarget* Target)
//{
//	if (InputTargets.Contains(*Target))
//	{
//		InputTargets.Remove(*Target);
//	}
//}

void AInputManager::BroadcastInputAxis(EInputAxisName::Type AxisName, float Axis)
{
	switch (AxisName)
	{
	case EInputAxisName::MoveForward:
		if (Axis != MoveForwardAxis)
		{
			MoveForwardAxis = Axis;
		}
		break;
	case EInputAxisName::MoveRight:
		if (Axis != MoveForwardAxis)
		{
			MoveForwardAxis = Axis;
		}
		break;
	case EInputAxisName::LookUp:
		if (Axis != MoveForwardAxis)
		{
			MoveForwardAxis = Axis;
		}
		break;
	case EInputAxisName::LookUpRate:
		if (Axis != MoveForwardAxis)
		{
			MoveForwardAxis = Axis;
		}
		break;
	}

	//for (int32 i; i < InputTargets.Num(); ++i)
	//{
	//	InputTargets[i].ReceiveAxis(MoveForwardAxis, MoveRightAxis, LookUpAxis, LookUpRateAxis);
	//}
}

void AInputManager::BroadcastInputKey(EInputKey::Type Key, bool Pressed)
{
	//for (int32 i; i < InputTargets.Num(); ++i)
	//{
	//	//InputTargets[i].ReceiveKey(Key, Pressed);
	//}

	if (Pressed)
	{
		if (!InputKeys.Contains(Key))
		{
			InputKeys.AddUnique(Key);
		}
		else
		{
			BroadcastInputDownKeys();
		}
	}
	else
	{
		InputKeys.Remove(Key);
	}
}

void AInputManager::BroadcastInputDownKeys()
{
	//for (int32 i; i < InputTargets.Num(); ++i)
	//{
	//	//InputTargets[i].ReceiveDownKeys(InputKeys);
	//}
}

void AInputManager::AddCacheTarget()
{
	//for (int32 i; i < InputTargetCaches.Num(); ++i)
	//{
	//	if (!InputTargets.Contains(InputTargetCaches[i]))
	//	{
	//		InputTargetCaches.AddUnique(InputTargetCaches[i]);
	//	}
	//}
}

// Called when the game starts or when spawned
void AInputManager::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AInputManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

