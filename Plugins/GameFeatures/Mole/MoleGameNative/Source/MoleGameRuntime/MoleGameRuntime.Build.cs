using UnrealBuildTool;

public class MoleGameRuntime : ModuleRules {
    public MoleGameRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "GameplayTasks",
            "NavigationSystem",
            "ReplicationGraph",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "GameplayAbilities",
            "GameplayMessages",
            "GameplayStateMachine",
            "GameplayTags",
            "ModularGameplay",
            "NetCore",
            "PlayspaceSystem",
            "TargetingSystem",
        });
    }
}
