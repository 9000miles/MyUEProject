// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SCompoundWidget.h"
class SCheckBox;
class SMainSlate :public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMainSlate)
	{}

	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);

public:
	template<int32 Index>
	void OnValueChanged(ECheckBoxState NewState)
	{
		if (CheckBoxArray.IsValidIndex(Index))
		{
			for (int32 i = 0; i < CheckBoxArray.Num(); i++)
			{
				if (CheckBoxArray[i].IsValid())
				{
					if (i == Index)
					{
						CheckBoxArray[i]->SetIsChecked(ECheckBoxState::Checked);
					}
					else
					{
						CheckBoxArray[i]->SetIsChecked(ECheckBoxState::Unchecked);
					}
				}
			}
		}
	}
protected:
	TArray < TSharedPtr<class SCheckBox>> CheckBoxArray;
};

