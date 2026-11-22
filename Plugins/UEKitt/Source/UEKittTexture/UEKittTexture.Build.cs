using UnrealBuildTool;

public class UEKittTexture : ModuleRules {
    public UEKittTexture(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "RHI",
            "RenderCore",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
