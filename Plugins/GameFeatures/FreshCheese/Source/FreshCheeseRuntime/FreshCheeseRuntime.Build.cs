using UnrealBuildTool;

public class FreshCheeseRuntime : ModuleRules {
    public FreshCheeseRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "NavigationSystem",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "GameplayAbilities",
            "SlateCore",
        });
    }
}
