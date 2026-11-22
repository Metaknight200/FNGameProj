using UnrealBuildTool;
public class FortniteCompatibility : ModuleRules {
    public FortniteCompatibility(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "Niagara", "AudioMixer", "AIModule" });
    }
}
