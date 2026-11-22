#include "FortGameInstance.h"

UFortGameInstance::UFortGameInstance() {
    this->bBattleRoyaleMatchmakingEnabled = true;
    this->bCreativeModeProfileEnabled = true;
    this->FrontEndPlaylistData.AddDefaulted(6);
    this->bOverridingCurrentEmoteMusicFFT = false;
    this->CurrentEmoteMusicFFT100hz = 0.00f;
    this->CurrentEmoteMusicFFT2000hz = 0.00f;
    this->EmoteMusicEnvelopeBeatCount = 0.00f;
    this->KairosHeartbeatManager = NULL;
    this->ProfileManager = NULL;
    this->InventoryManager = NULL;
    this->Matchmaking = NULL;
    this->MatchmakingV2 = NULL;
    this->RejoinCheck = NULL;
    this->SocialManager = NULL;
    this->MatchAnalytics = NULL;
    this->PartySpectateAnalytics = NULL;
    this->SidecarSys = NULL;
    this->TooltipManager = NULL;
    this->UpdateManager = NULL;
    this->DataAssetDirectoryManager = NULL;
    this->InteractabilityTracker = NULL;
    this->Chatroom = NULL;
    this->SeasonalEventManager = NULL;
    this->TournamentManager = NULL;
    this->MobilePushNotificationManager = NULL;
    this->BroadcastFeatureStatusRate = 0.50f;
    this->CurrentMissionGenerator = NULL;
    this->AppActivationSoundMixManager = NULL;
    this->KairosUIResX = 607;
    this->KairosUIResY = 1080;

    this->KairosMinSupportedAppVersion = 0;
    this->KairosHotfixCheckTimer = 300.00f;
    this->KairosHotfixCheckVariance = 120.00f;
    this->PlaylistManager = NULL;
    this->MaterialCacheManager = NULL;
    this->ReplayVideoManager = NULL;
    this->ExtractionBootstrapper = NULL;
    this->PegasusDriver = NULL;
    this->ContentBeaconClient = NULL;
    this->DADIslandQuerier = NULL;
    this->DADCosmeticItemUserOptionsCollection = NULL;
    this->CreativeDiscoverySurfaceManager = NULL;
}

bool UFortGameInstance::UninstallFortniteBROnNextBoot_Implementation(bool bRestartApp, bool bPromptForRestart) {
    return false;
}

bool UFortGameInstance::UninstallAllOptionalContentOnNextBoot_Implementation(bool bRestartApp, bool bPromptForRestart) {
    return false;
}

void UFortGameInstance::SetUserSetting_Implementation(const FString& Key, const FString& Value, FWebJSResponse Response) {
}

void UFortGameInstance::SetOverrideCurrentMusicFFT(float FFT100hz, float FFT2000hz) {
}

void UFortGameInstance::SetMultipleUserSettings_Implementation(const TMap<FString, FString>& Settings, FWebJSResponse Response) {
}

void UFortGameInstance::SetHotfixCompleteCallback_Implementation(FWebJSFunction Callback) {
}

void UFortGameInstance::SetFeatureStatusCallback_Implementation(FWebJSFunction Callback) {
}

void UFortGameInstance::SetErrorSimulationCommands_Implementation(const FString& CommandLine) {
}

void UFortGameInstance::RequestBroadcast_Implementation() {
}

void UFortGameInstance::PauseContentInstall_Implementation() {
}

void UFortGameInstance::OpenUpdateApp_Implementation() {
}

void UFortGameInstance::OnTournamentDataRefreshed() {
}

void UFortGameInstance::KairosSubmitBugReport_Implementation(const FString& Subject, const FString& Body, FWebJSResponse Response) {
}

void UFortGameInstance::IsContentUpToDate_Implementation(EFortGameFeature Feature, FWebJSResponse Response) {
}

void UFortGameInstance::GetUserSetting_Implementation(const FString& Key, FWebJSResponse Response) {
}

void UFortGameInstance::GetProjectVersion_Implementation(FWebJSResponse Response) {
}

UFortLinkDataManager* UFortGameInstance::GetLinkDataManager() const {
    return NULL;
}

void UFortGameInstance::GetHotfixHasApplied_Implementation(FWebJSResponse Response) {
}

void UFortGameInstance::GetFeatureRequiredSizesRequiredOnly_Implementation(EFortGameFeature Feature, FWebJSResponse Response) {
}

void UFortGameInstance::GetFeatureRequiredSizesOptionalOnly_Implementation(EFortGameFeature Feature, FWebJSResponse Response) {
}

void UFortGameInstance::GetFeatureRequiredSizes_Implementation(EFortGameFeature Feature, FWebJSResponse Response) {
}

UFortSeasonalEventManager* UFortGameInstance::GetEventManager() const {
    return NULL;
}

UFortDataAssetDirectoryManager* UFortGameInstance::GetDataAssetDirectoryManager() const {
    return DataAssetDirectoryManager;
}

UDAD_IslandQuerier* UFortGameInstance::GetDADIslandQuerier() const {
    return DADIslandQuerier;
}

UDAD_CosmeticItemUserOptionsCollection* UFortGameInstance::GetDADCosmeticItemOptionsCollection() const {
    return NULL;
}

void UFortGameInstance::GetContentState_Implementation(EFortGameFeature Feature, FWebJSResponse Response) {
}

void UFortGameInstance::GetAnalyticsSessionDetails_Implementation(FWebJSResponse Response) {
}

void UFortGameInstance::DebugCreatePlayerWithLoginInfo(int32 ControllerId, const FString& Email, const FString& Password) {
}

void UFortGameInstance::DebugCreateBackgroundPlayer(int32 ControllerId) {
}

void UFortGameInstance::ContinueDelayedStartup() {
}

void UFortGameInstance::ClearOverrideCurrentMusicFFT() {
}

void UFortGameInstance::CheckLatestClient_Implementation(FWebJSResponse Response) {
}

void UFortGameInstance::ChangeActiveGameFeature(const FString& FeatureString) {
}

bool UFortGameInstance::CancelUninstallFortniteBROnNextBoot_Implementation() {
    return false;
}

bool UFortGameInstance::CancelUninstallAllOptionalContentOnNextBoot_Implementation() {
    return false;
}

void UFortGameInstance::CancelContentInstall_Implementation() {
}


