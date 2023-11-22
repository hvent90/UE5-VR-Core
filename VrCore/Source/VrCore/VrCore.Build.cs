// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VrCore : ModuleRules
{
	public VrCore(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"NetCore",
				"CoreUObject",
				"Engine",
				"PhysicsCore",
				"HeadMountedDisplay",
				"SteamVRInputDevice",
				"UMG",
				"NavigationSystem",
				"AIModule",
				"AnimGraphRuntime",
				"VRExpansionPlugin",
				"Projects"
				// ... add other public dependencies that you statically link with here ...
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"InputCore",
				"RHI",
				"ApplicationCore",
				"RenderCore",
				"NetworkReplayStreaming",
				"AIModule",
				"UMG",
				"GameplayTags", "RoyalDivision"
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
