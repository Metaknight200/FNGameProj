using UnrealBuildTool;

public class ValetUI : ModuleRules {
    public ValetUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "FortniteGame",
            "UMG",
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteUI",
            "ValetRuntime",
        });
    }
}
