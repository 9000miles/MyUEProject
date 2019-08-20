// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManagerBase.h"
#include "IInputReceiveTarget.h"
#include "InputManager.generated.h"

UENUM(BlueprintType)
namespace EInputAxisName
{
	enum Type
	{
		MoveForward,
		MoveRight,
		LookUp,
		LookUpRate,
	};
}

UENUM(BlueprintType)
namespace EInputKey
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

UCLASS()
class MYUEPROJECT_API AInputManager : public AManagerBase
{
	GENERATED_BODY()

public:
	TArray<TEnumAsByte<EInputKey::Type>> InputKeys;
	//TArray<IInputReceiveTarget> InputTargets;
	//TArray<IInputReceiveTarget> InputTargetCaches;
	float MoveForwardAxis;
	float MoveRightAxis;
	float LookUpAxis;
	float LookUpRateAxis;



public:
	// Sets default values for this actor's properties
	AInputManager();

	//virtual void InitManager() override;

	//UFUNCTION(BlueprintCallable, Category = "SaveGameData")
	//	void RegistorTarget(IInputReceiveTarget* Target);

	//UFUNCTION(BlueprintCallable, Category = "SaveGameData")
	//	void UnregistorTarget(IInputReceiveTarget* Target);

	UFUNCTION(BlueprintCallable, Category = "SaveGameData")
		void BroadcastInputAxis(EInputAxisName::Type AxisName, float Axis);

	UFUNCTION(BlueprintCallable, Category = "SaveGameData")
		void BroadcastInputKey(EInputKey::Type Key, bool Pressed);

	UFUNCTION(BlueprintCallable, Category = "SaveGameData")
		void BroadcastInputDownKeys();

	void AddCacheTarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
