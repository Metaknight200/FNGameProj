using UnrealBuildTool;

public class PhosphorusWipeoutRuntime : ModuleRules {
    public PhosphorusWipeoutRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "GameplayAbilities",
            "GameplayTags",
            "PhosphorusRuntime",
        });
    }
}
