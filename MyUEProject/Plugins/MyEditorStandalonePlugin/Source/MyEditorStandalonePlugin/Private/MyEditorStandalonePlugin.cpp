// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MyEditorStandalonePlugin.h"
#include "MyEditorStandalonePluginStyle.h"
#include "MyEditorStandalonePluginCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "MainSlate.h"

static const FName MyEditorStandalonePluginTabName("MyEditorStandalonePlugin");

#define LOCTEXT_NAMESPACE "FMyEditorStandalonePluginModule"

void FMyEditorStandalonePluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FMyEditorStandalonePluginStyle::Initialize();
	FMyEditorStandalonePluginStyle::ReloadTextures();

	FMyEditorStandalonePluginCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FMyEditorStandalonePluginCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FMyEditorStandalonePluginModule::PluginButtonClicked),
		FCanExecuteAction());

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FMyEditorStandalonePluginModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}

	//{
	//	TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
	//	ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FMyEditorStandalonePluginModule::AddToolbarExtension));

	//	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	//}

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(MyEditorStandalonePluginTabName, FOnSpawnTab::CreateRaw(this, &FMyEditorStandalonePluginModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FMyEditorStandalonePluginTabTitle", "MyEditorStandalonePlugin"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FMyEditorStandalonePluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FMyEditorStandalonePluginStyle::Shutdown();

	FMyEditorStandalonePluginCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(MyEditorStandalonePluginTabName);
}

TSharedRef<SDockTab> FMyEditorStandalonePluginModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FMyEditorStandalonePluginModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("MyEditorStandalonePlugin.cpp"))
	);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SAssignNew(MainSlate, SMainSlate)
		];
	// Put your tab content here!
	//SNew(SBox)
	//.HAlign(HAlign_Center)
	//.VAlign(VAlign_Center)
	//[
	//	SNew(STextBlock)
	//	.Text(WidgetText)
	//]	
}

void FMyEditorStandalonePluginModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->InvokeTab(MyEditorStandalonePluginTabName);
}

void FMyEditorStandalonePluginModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FMyEditorStandalonePluginCommands::Get().OpenPluginWindow);
}

void FMyEditorStandalonePluginModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FMyEditorStandalonePluginCommands::Get().OpenPluginWindow);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FMyEditorStandalonePluginModule, MyEditorStandalonePlugin)