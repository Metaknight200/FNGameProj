using UnrealBuildTool;

public class ProgressiveCosmeticUI : ModuleRules {
    public ProgressiveCosmeticUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUILegacy",
            "GameFeatures",
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "FortniteUI",
            "UMG",
        });
    }
}
