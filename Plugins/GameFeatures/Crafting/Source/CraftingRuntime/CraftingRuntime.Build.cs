using UnrealBuildTool;

public class CraftingRuntime : ModuleRules {
    public CraftingRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "NavigationSystem",
            "Core",
            "CoreUObject",
            "DataRegistry",
            "Engine",
            "FortniteGame",
            "GameplayAbilities",
            "GameplayTags",
            "ModularGameplay",
            "UMG",
        });
    }
}
