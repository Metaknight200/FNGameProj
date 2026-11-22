using UnrealBuildTool;

public class HermesPlaysetsUI : ModuleRules {
    public HermesPlaysetsUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DynamicHUD",
            "Engine",
            "FortniteGame",
        });
    }
}
