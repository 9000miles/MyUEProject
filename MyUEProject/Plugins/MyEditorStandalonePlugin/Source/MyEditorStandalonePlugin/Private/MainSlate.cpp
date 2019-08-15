#include "MainSlate.h"
#include "STextBlock.h"
#include "SCheckBox.h"

#define  LOCTEXT_NAMESPACE "MainSlate"

void SMainSlate::Construct(const FArguments & InArgs)
{
	CheckBoxArray.SetNum(4);

	ChildSlot
		[
			SNew(SVerticalBox)

			+ SVerticalBox::Slot()
		.Padding(10.0f)
		.AutoHeight()
		.VAlign(VAlign_Bottom)
		.HAlign(HAlign_Center)
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Top)
		.Padding(FMargin(0.f, 0.f, 4.f, 0.f))
		[
			SAssignNew(CheckBoxArray[0], SCheckBox)
			.OnCheckStateChanged(this, &SMainSlate::OnValueChanged<0>)
		.ToolTipText(LOCTEXT("Cell A", "Cell 1"))
		.IsChecked(ECheckBoxState::Unchecked)
		.Content()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("CheckText A", "CheckCell 1"))
		]
		]

	+ SHorizontalBox::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Top)
		.Padding(FMargin(0.f, 0.f, 4.f, 0.f))
		[
			SAssignNew(CheckBoxArray[1], SCheckBox)
			.OnCheckStateChanged(this, &SMainSlate::OnValueChanged<1>)
		.ToolTipText(LOCTEXT("Cell B", "Cell 2"))
		.IsChecked(ECheckBoxState::Unchecked)
		.Content()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("CheckText B", "CheckCell 2"))
		]
		]

	+ SHorizontalBox::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Top)
		.Padding(FMargin(0.f, 0.f, 4.f, 0.f))
		[
			SAssignNew(CheckBoxArray[2], SCheckBox)
			.OnCheckStateChanged(this, &SMainSlate::OnValueChanged<2>)
		.ToolTipText(LOCTEXT("Cell C", "Cell 3"))
		.IsChecked(ECheckBoxState::Unchecked)
		.Content()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("CheckText C", "CheckCell 3"))
		]
		]

	+ SHorizontalBox::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Top)
		.Padding(FMargin(0.f, 0.f, 4.f, 0.f))
		[
			SAssignNew(CheckBoxArray[3], SCheckBox)
			.OnCheckStateChanged(this, &SMainSlate::OnValueChanged<3>)
		.ToolTipText(LOCTEXT("Cell D", "Cell 4"))
		.IsChecked(ECheckBoxState::Unchecked)
		.Content()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("CheckText D", "CheckCell 4"))
		]
		]
		]
		];
}

#undef LOCTEXT_NAMESPACE