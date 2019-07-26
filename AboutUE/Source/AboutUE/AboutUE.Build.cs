// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AboutUE : ModuleRules
{
    public AboutUE(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay",
            "MyPlugin", "BlueprintReflectionPlugin" });
    }
}
//,
//    {
//      "Name": "GameSavePlugin",
//      "Type": "Runtime",
//      "LoadingPhase": "Default"
//    },
//    {
//      "Name": "BlueprintReflection",
//      "Type": "Runtime",
//      "LoadingPhase": "Default"
//    }