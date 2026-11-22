using UnrealBuildTool;

public class GiftingUI : ModuleRules {
    public GiftingUI(ReadOnlyTargetRules Target) : base(Target) {
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
            "GameSubCatalog",
            "SlateCore",
            "SocialUMG",
            "UMG",
        });
    }
}
