using UnrealBuildTool;
public class FortniteEditorTarget : TargetRules {
    public FortniteEditorTarget(TargetInfo Target) : base(Target) {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        WindowsPlatform.Compiler = WindowsCompiler.VisualStudio2019;
        ExtraModuleNames.AddRange(new string[] { "FortniteEditor", "CoreOnline", "EasyAntiCheatCommon", "FortniteCompatibility", "FortniteEngineLoadingScreen", "FortniteGame", "FortniteUI", "LauncherSocialDefaults", "LocalNotifications" });
    }
}
