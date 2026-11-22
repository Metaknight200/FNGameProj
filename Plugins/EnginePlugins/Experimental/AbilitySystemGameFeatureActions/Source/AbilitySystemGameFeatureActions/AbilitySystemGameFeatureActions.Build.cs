using UnrealBuildTool;

public class AbilitySystemGameFeatureActions : ModuleRules {
    public AbilitySystemGameFeatureActions(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameFeatures",
        });
    }
}
