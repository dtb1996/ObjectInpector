// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ObjectInspector : ModuleRules
{
	public ObjectInspector(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
