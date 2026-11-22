using UnrealBuildTool;

public class FortniteConversationUI : ModuleRules {
    public FortniteConversationUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteConversationRuntime",
            "FortniteGame",
            "FortniteUI",
            "GameplayTags",
            "SlateCore",
            "UMG",
        });
    }
}
