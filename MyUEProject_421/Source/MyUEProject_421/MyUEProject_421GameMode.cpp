// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MyUEProject_421GameMode.h"
#include "MyUEProject_421Character.h"
#include "UObject/ConstructorHelpers.h"

AMyUEProject_421GameMode::AMyUEProject_421GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
