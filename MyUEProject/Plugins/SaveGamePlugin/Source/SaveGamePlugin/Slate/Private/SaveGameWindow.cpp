#include "../Public/SaveGameWindow.h"
#include "../Public/DataItem.h"

void SSaveGameWindow::Construct(const FArguments& InArgs)
{
	ChildSlot
	[
		SNew(SDataItem)
	];
}

