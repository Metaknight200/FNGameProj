using UnrealBuildTool;

public class FortniteConversationRuntime : ModuleRules {
    public FortniteConversationRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonConversationRuntime",
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "GameplayTags",
            "UMG",
        });
    }
}
