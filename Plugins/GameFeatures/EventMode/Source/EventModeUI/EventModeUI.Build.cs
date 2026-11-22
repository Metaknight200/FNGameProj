using UnrealBuildTool;

public class EventModeUI : ModuleRules {
    public EventModeUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "FortniteUI",
            "Paper2D",
            "UMG",
        });
    }
}
