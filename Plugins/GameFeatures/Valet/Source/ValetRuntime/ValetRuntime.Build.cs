using UnrealBuildTool;

public class ValetRuntime : ModuleRules {
    public ValetRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "FortniteGame",
            "GameplayAbilities",
            "GameplayCameras",
            "GameplayTags",
            "ModularGameplay",
            "MotoSynth",
            "NetworkPrediction",
            "Niagara",
        });
    }
}
