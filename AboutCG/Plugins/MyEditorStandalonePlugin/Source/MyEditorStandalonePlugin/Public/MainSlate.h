// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SCompoundWidget.h"

class SMainSlate :public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMainSlate)
	{}

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

};

