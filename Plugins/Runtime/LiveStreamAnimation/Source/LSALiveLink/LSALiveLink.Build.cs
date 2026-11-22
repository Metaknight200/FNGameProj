using UnrealBuildTool;

public class LSALiveLink : ModuleRules {
    public LSALiveLink(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "LiveLinkInterface",
            "LiveStreamAnimation",
        });
    }
}
