// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "..\Public\ManagerBase.h"
#include "Object.h"
#include "Engine\World.h"
#include "GameFramework\Actor.h"

AManagerBase::AManagerBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AManagerBase::InitManager_Implementation()
{
}

void AManagerBase::Tick(float DeltaSeconds)
{
}

void AManagerBase::TickFunction_Implementation(float DeltaTime)
{
}
