using UnrealBuildTool;

public class MotherGameplayUI : ModuleRules {
    public MotherGameplayUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "UMG",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteUI",
            "GameplayMessages",
            "GameplayTags",
        });
    }
}
