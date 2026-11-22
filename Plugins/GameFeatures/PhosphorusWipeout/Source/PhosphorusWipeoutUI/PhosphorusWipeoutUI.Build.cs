using UnrealBuildTool;

public class PhosphorusWipeoutUI : ModuleRules {
    public PhosphorusWipeoutUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "FortniteUI",
            "UMG",
            "Core",
            "CoreUObject",
            "Engine",
            "KnockbackRuntime",
            "PhosphorusRuntime",
            "PhosphorusUI",
            "PhosphorusWipeoutRuntime",
        });
    }
}
