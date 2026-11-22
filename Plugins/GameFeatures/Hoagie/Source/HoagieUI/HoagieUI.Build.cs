using UnrealBuildTool;

public class HoagieUI : ModuleRules {
    public HoagieUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "FortniteGame",
            "UMG",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteUI",
            "HoagieRuntime",
        });
    }
}
