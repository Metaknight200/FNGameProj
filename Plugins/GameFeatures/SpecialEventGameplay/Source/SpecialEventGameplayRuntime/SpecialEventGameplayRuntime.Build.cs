using UnrealBuildTool;

public class SpecialEventGameplayRuntime : ModuleRules {
    public SpecialEventGameplayRuntime(ReadOnlyTargetRules Target) : base(Target) {
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
            "LevelSequence",
            "MeshNetwork",
        });
    }
}
