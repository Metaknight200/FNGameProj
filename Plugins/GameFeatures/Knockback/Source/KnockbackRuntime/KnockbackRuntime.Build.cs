using UnrealBuildTool;

public class KnockbackRuntime : ModuleRules {
    public KnockbackRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "GameplayTasks",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "GameplayAbilities",
            "NetCore",
        });
    }
}
