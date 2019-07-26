// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "MyEditorStandalonePluginStyle.h"

class FMyEditorStandalonePluginCommands : public TCommands<FMyEditorStandalonePluginCommands>
{
public:

	FMyEditorStandalonePluginCommands()
		: TCommands<FMyEditorStandalonePluginCommands>(TEXT("MyEditorStandalonePlugin"), NSLOCTEXT("Contexts", "MyEditorStandalonePlugin", "MyEditorStandalonePlugin Plugin"), NAME_None, FMyEditorStandalonePluginStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};