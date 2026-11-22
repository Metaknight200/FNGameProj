using UnrealBuildTool;

public class NevadaUI : ModuleRules {
    public NevadaUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "FortniteGame",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteUI",
            "NevadaRuntime",
            "UMG",
        });
    }
}
