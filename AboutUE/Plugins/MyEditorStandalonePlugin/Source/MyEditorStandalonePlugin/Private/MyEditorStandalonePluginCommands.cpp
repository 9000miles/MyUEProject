// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MyEditorStandalonePluginCommands.h"

#define LOCTEXT_NAMESPACE "FMyEditorStandalonePluginModule"

void FMyEditorStandalonePluginCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "MyEditorStandalonePlugin", "Bring up MyEditorStandalonePlugin window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
