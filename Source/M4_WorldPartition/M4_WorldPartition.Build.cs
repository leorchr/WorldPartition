// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class M4_WorldPartition : ModuleRules
{
	public M4_WorldPartition(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
