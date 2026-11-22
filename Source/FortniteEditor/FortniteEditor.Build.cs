using UnrealBuildTool;
public class FortniteEditor : ModuleRules {
    public FortniteEditor(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivateDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "UnrealEd", "AssetTools",
            "FortniteGame", "Slate", "SlateCore", "RenderCore", "RHI"
        });
    }
}
