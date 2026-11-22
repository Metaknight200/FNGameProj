using UnrealBuildTool;

public class SpecialEventGameplayUI : ModuleRules {
    public SpecialEventGameplayUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "UMG",
            "CommonUILegacy",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "FortniteUI",
        });
    }
}
