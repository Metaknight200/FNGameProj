using UnrealBuildTool;
public class FortniteGameTarget : TargetRules {
    public FortniteGameTarget(TargetInfo Target) : base(Target) {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        WindowsPlatform.Compiler = WindowsCompiler.VisualStudio2019;
        ExtraModuleNames.AddRange(new string[] { "CoreOnline", "EasyAntiCheatCommon", "FortniteCompatibility", "FortniteEngineLoadingScreen", "FortniteGame", "FortniteUI", "LauncherSocialDefaults", "LocalNotifications" });
    }
}
