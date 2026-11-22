using UnrealBuildTool;

public class FortniteUI : ModuleRules {
    public FortniteUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "FortniteCompatibility",
            "AudioMixer",
            "BlueprintContext",
            "CommonInput",
            "CommonUI",
            "CommonUILegacy",
            "Core",
            "CoreUObject",
            "Engine",
            "EpicCMSUIFramework",
            "FortniteGame",
            "GameFeatures",
            "GameSubCatalog",
            "GameplayAbilities",
            "GameplayMessages",
            "GameplayTags",
            "Hotfix",
            "InputCore",
            "JsonUtilities",
            "LauncherSocialDefaults",
            "LauncherSocialTypes",
            "McpProfileSys",
            "MediaAssets",
            "MediaUtils",
            "Overlay",
            "Paper2D",
            "Party",
            "Slate",
            "SlateCore",
            "SocialUMG",
            "SubtitlesWidgets",
            "UMG",
        });
    }
}
