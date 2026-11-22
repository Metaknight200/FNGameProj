using UnrealBuildTool;

public class SpicySakeRuntime : ModuleRules {
    public SpicySakeRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "GameplayAbilities",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
        });
    }
}
