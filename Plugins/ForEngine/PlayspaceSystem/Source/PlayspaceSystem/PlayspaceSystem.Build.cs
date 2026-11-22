using UnrealBuildTool;

public class PlayspaceSystem : ModuleRules {
    public PlayspaceSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "InputCore",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "ModularGameplay",
            "NetCore",
        });
    }
}
