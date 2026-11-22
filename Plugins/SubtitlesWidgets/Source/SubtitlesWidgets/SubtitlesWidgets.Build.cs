using UnrealBuildTool;

public class SubtitlesWidgets : ModuleRules {
    public SubtitlesWidgets(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MediaAssets",
            "Overlay",
            "SlateCore",
            "UMG",
        });
    }
}
