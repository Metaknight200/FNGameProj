using UnrealBuildTool;

public class CraftingUI : ModuleRules {
    public CraftingUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "SlateCore",
            "CommonUI",
            "CommonUILegacy",
            "Core",
            "CoreUObject",
            "CraftingRuntime",
            "Engine",
            "FortniteGame",
            "FortniteUI",
            "GameplayTags",
            "UMG",
        });
    }
}
