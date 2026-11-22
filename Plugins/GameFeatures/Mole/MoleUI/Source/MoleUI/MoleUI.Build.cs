using UnrealBuildTool;

public class MoleUI : ModuleRules {
    public MoleUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonInput",
            "CommonUI",
            "CommonUILegacy",
            "Core",
            "CoreUObject",
            "DynamicHUD",
            "Engine",
            "FortniteGame",
            "FortniteUI",
            "GameplayAbilities",
            "GameplayMessages",
            "GameplayTags",
            "InputCore",
            "ModularGameplay",
            "MoleGameRuntime",
            "SlateCore",
            "UMG",
        });
    }
}
