using UnrealBuildTool;

public class AudioGameplayVolume : ModuleRules {
    public AudioGameplayVolume(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "FortniteCompatibility",
            "AudioGameplay",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
