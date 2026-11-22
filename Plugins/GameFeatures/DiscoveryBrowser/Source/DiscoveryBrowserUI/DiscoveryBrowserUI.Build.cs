using UnrealBuildTool;

public class DiscoveryBrowserUI : ModuleRules {
    public DiscoveryBrowserUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "FortniteUI",
            "SlateCore",
            "UMG",
        });
    }
}
