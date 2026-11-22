using UnrealBuildTool;

public class SmartObjectsModule : ModuleRules {
    public SmartObjectsModule(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayBehaviorsModule",
            "GameplayTags",
            "GameplayTasks",
        });
    }
}
