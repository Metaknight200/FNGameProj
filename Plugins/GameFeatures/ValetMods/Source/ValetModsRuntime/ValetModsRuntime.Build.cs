using UnrealBuildTool;

public class ValetModsRuntime : ModuleRules {
    public ValetModsRuntime(ReadOnlyTargetRules Target) : base(Target) {
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
            "ValetRuntime",
        });
    }
}
