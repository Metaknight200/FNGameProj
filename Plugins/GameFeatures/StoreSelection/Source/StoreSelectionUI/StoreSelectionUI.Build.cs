using UnrealBuildTool;

public class StoreSelectionUI : ModuleRules {
    public StoreSelectionUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "CommonUILegacy",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "FortniteUI",
            "UMG",
        });
    }
}
