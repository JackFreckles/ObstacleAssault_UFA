// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ObstacleAssault_UFA : ModuleRules
{
	public ObstacleAssault_UFA(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ObstacleAssault_UFA",
			"ObstacleAssault_UFA/Variant_Platforming",
			"ObstacleAssault_UFA/Variant_Platforming/Animation",
			"ObstacleAssault_UFA/Variant_Combat",
			"ObstacleAssault_UFA/Variant_Combat/AI",
			"ObstacleAssault_UFA/Variant_Combat/Animation",
			"ObstacleAssault_UFA/Variant_Combat/Gameplay",
			"ObstacleAssault_UFA/Variant_Combat/Interfaces",
			"ObstacleAssault_UFA/Variant_Combat/UI",
			"ObstacleAssault_UFA/Variant_SideScrolling",
			"ObstacleAssault_UFA/Variant_SideScrolling/AI",
			"ObstacleAssault_UFA/Variant_SideScrolling/Gameplay",
			"ObstacleAssault_UFA/Variant_SideScrolling/Interfaces",
			"ObstacleAssault_UFA/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
