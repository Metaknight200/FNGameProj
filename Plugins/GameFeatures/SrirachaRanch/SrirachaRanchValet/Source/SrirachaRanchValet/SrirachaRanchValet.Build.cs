using UnrealBuildTool;

public class SrirachaRanchValet : ModuleRules {
    public SrirachaRanchValet(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "SrirachaRanch",
            "ValetRuntime",
        });
    }
}
