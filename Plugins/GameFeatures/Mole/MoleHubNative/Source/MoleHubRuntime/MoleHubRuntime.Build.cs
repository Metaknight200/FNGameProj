using UnrealBuildTool;

public class MoleHubRuntime : ModuleRules {
    public MoleHubRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "FortniteGame",
            "Core",
            "CoreUObject",
            "Engine",
            "GameHubRuntime",
        });
    }
}
