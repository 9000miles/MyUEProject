// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "..\Public\TickObject.h"

UTickObject::UTickObject()
{
}

void UTickObject::Tick(float DeltaTime)
{
	TickFunction(DeltaTime);
}

//void UTickObject::TickFunction(float DeltaTime)
//{
//}

TStatId UTickObject::GetStatId() const
{
	return TStatId();
}