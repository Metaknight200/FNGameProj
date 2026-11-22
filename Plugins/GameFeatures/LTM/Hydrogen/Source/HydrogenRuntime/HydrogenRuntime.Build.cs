using UnrealBuildTool;

public class HydrogenRuntime : ModuleRules {
    public HydrogenRuntime(ReadOnlyTargetRules Target) : base(Target) {
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
            "GameplayTags",
            "SlateCore",
        });
    }
}
