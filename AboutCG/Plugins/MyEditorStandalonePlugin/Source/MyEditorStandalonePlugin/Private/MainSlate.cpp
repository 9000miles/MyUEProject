#include "MainSlate.h"

#define  LOCTEXT_NAMESPACE "MainSlate"

void SMainSlate::Construct(const FArguments & InArgs)
{
	ChildSlot
		[
			SNew(SVerticalBox)

			+ SVerticalBox::Slot()
		.Padding(10.0f)
		.AutoHeight()
		.VAlign(VAlign_Bottom)
		.HAlign(HAlign_Left)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		[
			SNew(SCheckBox)
		]

	+ SHorizontalBox::Slot()
		[
			SNew(SCheckBox)
		]
		]
		];
}

#undef LOCTEXT_NAMESPACE