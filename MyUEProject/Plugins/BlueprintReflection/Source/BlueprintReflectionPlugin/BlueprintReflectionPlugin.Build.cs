//
//  Created by Derek van Vliet on 2014-12-10.
//  Copyright (c) 2014 Get Set Games Inc. All rights reserved.
//

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class BlueprintReflectionPlugin : ModuleRules
	{
		public BlueprintReflectionPlugin(ReadOnlyTargetRules Target) : base(Target)
		{

            //该模块不需要编译  true 不编译
            //bUsePrecompiled = true;

            PrivateIncludePaths.AddRange(
				new string[] {
					"BlueprintReflectionPlugin/Private",
				});

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine"
				});
		}
	}
}