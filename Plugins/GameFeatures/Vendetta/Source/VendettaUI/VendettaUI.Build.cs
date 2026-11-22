using UnrealBuildTool;

public class VendettaUI : ModuleRules {
    public VendettaUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "UMG",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "FortniteUI",
            "VendettaRuntime",
        });
    }
}
