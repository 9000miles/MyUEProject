// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ManagerBase.h"
#include "Object.h"
#include "Engine\World.h"

UManagerBase::UManagerBase()
{
	//Init();
}

//void UManagerBase::Init()
//{
//
//}

void UManagerBase::InitManager_Implementation()
{
	if (ActorClass != nullptr&&Actor == nullptr)
	{
		Actor = GetWorld()->SpawnActor<AActor>(ActorClass, FTransform());
	}
}

void UManagerBase::CheckActor()
{
	if (Actor == nullptr)
	{
		InitManager();
	}
}
