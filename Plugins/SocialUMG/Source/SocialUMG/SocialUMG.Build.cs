using UnrealBuildTool;

public class SocialUMG : ModuleRules {
    public SocialUMG(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "CommonUILegacy",
            "Core",
            "CoreUObject",
            "Engine",
            "Party",
            "SlateCore",
            "UMG",
        });
    }
}
