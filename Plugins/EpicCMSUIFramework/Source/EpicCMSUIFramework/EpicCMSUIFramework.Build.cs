using UnrealBuildTool;

public class EpicCMSUIFramework : ModuleRules {
    public EpicCMSUIFramework(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "CommonUILegacy",
            "Core",
            "CoreUObject",
            "Engine",
            "SlateCore",
            "UMG",
        });
    }
}
