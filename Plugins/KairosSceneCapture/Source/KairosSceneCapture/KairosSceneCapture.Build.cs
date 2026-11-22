using UnrealBuildTool;

public class KairosSceneCapture : ModuleRules {
    public KairosSceneCapture(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "InputCore",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "UMG",
            "WebBrowser",
        });
    }
}
