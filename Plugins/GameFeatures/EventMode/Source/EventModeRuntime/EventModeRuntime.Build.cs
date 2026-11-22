using UnrealBuildTool;

public class EventModeRuntime : ModuleRules {
    public EventModeRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "GameplayAbilities",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "GameplayTags",
            "ModularGameplay",
            "UMG",
        });
    }
}
