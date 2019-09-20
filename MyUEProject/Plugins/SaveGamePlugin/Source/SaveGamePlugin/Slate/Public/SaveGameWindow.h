// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SCompoundWidget.h"

class SSaveGameWindow :public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSaveGameWindow)
	{}

	SLATE_END_ARGS()
		void Construct(const FArguments& InArgs);

};