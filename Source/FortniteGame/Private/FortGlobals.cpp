#include "FortGlobals.h"

UFortGlobals::UFortGlobals() {
    this->BRMap = TEXT("Apollo_Terrain");
    this->BRMapFullName = TEXT("/Game/Athena/Apollo/Maps/Apollo_Terrain");
    this->MinTheaterListRefreshDelay = 0;
    this->MaxTheaterListRefreshDelay = 180;
    this->MinCullObjectSize = 64.00f;
    this->MinCullDistance = 2800.00f;
    this->MaxCullObjectSize = 1000.00f;
    this->MaxCullDistance = 40000.00f;
    this->MinRespawnHeightForEnvironmentDeath = 100.00f;
    this->MaxRespawnInAirHeight = 55000.00f;
    this->bEnablePlayerTriggeredRespawn = true;
    this->bEnableNewCustomizationPanel = false;
    this->bEnableInfluenceMap = true;
    this->bEnableAIDespawning = true;
    this->bEnableDBNO = true;
    this->bEnableIronCity = true;
    this->bEnableForceBuildingActorRecordUpdates = false;
    this->IronCityWargameTagList.AddDefaulted(20);
    this->bEnableIronCityCoast = true;
    this->bEnableMaydayStrangeLands = false;
    this->bForceMaydayStrangeLands = false;
    this->bEnableHestia = false;
    this->bEnableIronCityAutoAmplifierPlacement = false;
    this->bEnableWargameDebug = false;
    this->bEnableEnduranceDebug = false;
    this->bEnableTrapScoringCrafting = false;
    this->bEnableTrapScoringPlacement = false;
    this->bEnableTrapScoringActivation = true;
    this->bEnableInWorldScoreNumbers = false;
    this->bMustUseToggleJetpackExecute = true;
    this->bEnableNewRewardFlow = true;
    this->bEnableWIFE = true;
    this->bEnableFrontendCrafting = true;
    this->bEnableFrontendStorage = true;
    this->bEnableLazyASC = true;
    this->bEnableFriendCodes = true;
    this->bEnableCreativeMode = true;
    this->bEnableCreativeModeLimitedAccess = false;
    this->bEnableCreativeModeLimitedAccessForFounders = false;
    this->FlyVerificationInterval = 2.00f;
    this->InvulnerableVerificationInterval = 2.00f;
    this->ModeratorModeVerificationInterval = 2.00f;
    this->CreativeModeLimitedAccessEndTime = TEXT("2018-12-13T00:00:00");
    this->bEnableCreativeModeTutorials = true;
    this->CreativeTutorialSkydivingDelay = 5.00f;
    this->CreativeReturnToHubTutorialDelay = 300.00f;
    this->bSubmitReturnToMenuErrorLogs = true;
    this->bSubmitSecondaryReturnToMenuErrorLogs = false;
    this->ReturnToMenuErrorLogTailKb = 300;
    this->ReturnToMenuErrorLogSubmitChance = 0.10f;
    this->KairosSubmitOptions.AddDefaulted(2);
    this->bShowMissionResultsMovies = true;
    this->bDisablePlayerTeleportDuringMissionResults = false;
    this->bDisableParticleEffectsDuringMissionResults = false;
    this->bFlushGPUWhenPlayerIsTeleportedAtEndOfZone = false;
    this->bStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone = false;
    this->bTwitchEnabled = false;
    this->bAllowContainersInCreativeItemLists = true;
    this->bAccountLinkingEnabled = true;
    this->AccountLinkingUIConfig = EFortAccountLinkingUIConfig::Default;
    this->AccountLinkingUIURL = TEXT("https://www.epicgames.com/account/connected");
    this->bEnableAccountLinkingUIURLButton = true;
    this->bAllowStreamerSafetyCharacterReplication = false;
    this->bAnonymousCharacterModeSafetyCharacterReplication = true;
    this->bTournamentSafetyCharacterReplication = false;
    this->bAllowSafetyCharacterReplicationToUseVariantItems = false;
    this->bAllowItemWrapMaterialSyncLoads = false;
    this->bEnableQuestContentCheckOnSave = false;
    this->bEnableSeasonalQuestline = true;
    this->bTwitchHeartbeatEnabled = true;
    this->bTwitchAllowDisplayViewernames = true;
    this->MaxTwitchViewerNamesToCache = 1000;
    this->TwitchViewerNameExpirationMinutes = 0;
    this->MinTwitchHeartbeatInterval = 30.00f;
    this->TwitchAccountInformationRefreshInterval = 0.00f;
    this->bAllowLogout = true;
    this->bAllowQuit = true;
    this->bHasWorldMap = true;
    this->PlayerJoinServerTimeoutSeconds = 30.00f;
    this->PlayerUnregistrationFailsafeTimer = 600.00f;
    this->PollForDedicatedServerReadyToShutdownInterval = 5.00f;
    this->bUploadAthenaStatsV2 = true;
    this->bAthenaStatsFrontendEnabled = true;
    this->bAthenaLeaderboardFrontEndEnabled = true;
    this->bAthenaSquadQuickChatEnabled = true;
    this->AthenaQuickChatRangeForNonSquadTeamMembers = 15000.00f;
    this->bGlobalLeaderboardsFrontEndEnabled = true;
    this->TimeBetweenLeaderboardRequestsMinutes = 15;
    this->bFirstShotAccuracyDisabled = false;
    this->bAllowProjectileRethrow = true;
    this->bPapayaSpeakersEnabled = true;
    this->bDoAthenaClientStartupWeaponPreloading = false;
    this->bAthenaSpatialUIDeferMarkingItemsSeen = false;
    this->bAthenaUsesSimCollision = true;
    this->bAthenaSimVehicles = true;
    this->bAthenaSubstepping = true;
    this->bCampaignSubstepping = true;
    this->bCampaignUsesSimCollision = true;
    this->bCampaignSimVehicles = true;
    this->MaximumCharacterVelocity = 15000.00f;
    this->NumOutstandingAthenaAsyncRequests = 0;
    this->TotalAthenaAsyncRequests = 0;
    this->bAllowXboxStwToken = false;
    this->bUsePlatformProfanityFilterForChat = false;
    this->bShouldSendSettingsSnapshotOnLogin = true;
    this->bShouldForceAllowBroadcasting = true;
    this->bUseLegacyMediaSource = false;
    this->bUseLegacyMediaSourceForCreative = false;
    this->bDisableMediaStreamingOnWindows7 = false;
    this->bAllowElectraForCellStreaming = true;
    this->MaxElectraVerticalResolutionOf60fpsVideos = 0;
    this->MaxElectraFpsVideos = -1.00f;
    this->MaxElectraVerticalResolutionOfWindowsSWD = 720;
    this->ElectraLivePresentationOffset = 0.00f;
    this->ElectraLiveAudioPresentationOffset = 2.00f;
    this->bElectraLiveUseConservativePresentationOffset = false;
    this->bElectraUseDedicatedMediaSegmentDownloadThreads = false;
    this->bAllowElectraForReplayCinematic = true;
    this->bDisableElectraForReplayCinematicOnWin7 = false;
    this->bDisableElectraForReplayCinematicOnWin7AndWin8 = false;
    this->ProbabilityOfUsingElectraForReplayCinematic = 1.00f;
    this->OpenTimeLimitForReplayCinematic = 30.00f;
    this->DurationTimeLimitForReplayCinematic = 66.00f;
    this->DurationExtraTimeForReplayCinematic = 5.00f;
    this->bAllowElectraForWatchBattlePassMovie = true;
    this->bShowExtendedBattlePassMovie = true;
    this->ProbabilityOfUsingElectraForWatchBattlePassMovie = 1.00f;
    this->OpenTimeLimitForWatchBattlePassMovie = 6.00f;
    this->bAllowForceDefaultAudioTrack = true;
    this->MemoryRequirementForMediaStreamingMB = 0;
    this->MaxResolutionForMediaStreaming = 1088;
    this->MaxResolutionForStandalonePlayer = 360;
    this->RiskyReelsPlaylistBlacklistFilter.AddDefaulted(3);
    this->RadioPlaylistBlacklistFilter.AddDefaulted(9);
    this->bRegionCN = false;
    this->GlobalSnowAltitude = 340282346638528859811704183484516925440.00f;
    this->GlobalSnowRadius = -1.00f;
    this->SubGameAccess.AddDefaulted(2);
}

bool UFortGlobals::UseElectraForWatchBattlePassMovie() {
    return false;
}

bool UFortGlobals::UseElectraForReplayCinematic() {
    return false;
}

void UFortGlobals::UpdateAllGameFeaturesOnPauseChanged() {
}

float UFortGlobals::StWTutorialContentInstallationProgress() {
    return 0.0f;
}

bool UFortGlobals::ShowExtendedBattlePassMovie() {
    return false;
}

bool UFortGlobals::ShouldStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone() {
    return false;
}

bool UFortGlobals::ShouldShowMissionResultsMovies() {
    return false;
}

bool UFortGlobals::ShouldFlushGPUWhenPlayerIsTeleportedAtEndOfZone() {
    return false;
}

bool UFortGlobals::ShouldDisablePlayerTeleportDuringMissionResults() {
    return false;
}

bool UFortGlobals::ShouldDisableParticleEffectsDuringMissionResults() {
    return false;
}

bool UFortGlobals::ShouldDelayStartupLoading() {
    return false;
}

void UFortGlobals::SetGlobalSnowRadius(float Radius) {
}

void UFortGlobals::SetGlobalSnowOrigin(FVector Origin) {
}

void UFortGlobals::SetGlobalSnowAltitude(float Altitude) {
}

void UFortGlobals::SetCurrentSubGame(const UObject* WorldContextObject, const ESubGame SubGame) {
}

bool UFortGlobals::IsWIFEEnabled() {
    return false;
}

bool UFortGlobals::IsWargameDebugEnabled() {
    return false;
}

bool UFortGlobals::IsUsingTouch(const UObject* WorldContextObject) {
    return false;
}

bool UFortGlobals::IsTwitchEnabled() {
    return false;
}

bool UFortGlobals::IsTouchInputPlatform() {
    return false;
}

bool UFortGlobals::IsTencentBuild() {
    return false;
}

bool UFortGlobals::IsStWTutorialContentInstalled() {
    return false;
}

bool UFortGlobals::IsRunningInGFN() {
    return false;
}

bool UFortGlobals::IsNewRewardFlowEnabled() {
    return false;
}

bool UFortGlobals::IsMobileGame(const UObject* WorldContextObject) {
    return false;
}

bool UFortGlobals::IsIronCityAutoAmplifierPlacementEnabled() {
    return false;
}

bool UFortGlobals::IsInSubGame(const UObject* WorldContextObject, const ESubGame SubGame) {
    return false;
}

bool UFortGlobals::IsInPhoenixZone(const UObject* WorldContextObject) {
    return false;
}

bool UFortGlobals::IsInAthena(const UObject* WorldContextObject) {
    return false;
}

bool UFortGlobals::IsHestiaEnabled() {
    return false;
}

bool UFortGlobals::IsHeroLoadoutSystemEnabled() {
    return false;
}

bool UFortGlobals::IsGameFeatureContentInstalled(const EFortGameFeature GameFeature) {
    return false;
}

bool UFortGlobals::IsFrontendStorageEnabled() {
    return false;
}

bool UFortGlobals::IsFrontendCraftingEnabled() {
    return false;
}

bool UFortGlobals::IsFirstShotAccuracyDisabled() {
    return false;
}

bool UFortGlobals::IsErebus() {
    return false;
}

bool UFortGlobals::IsEnduranceDebugEnabled() {
    return false;
}

bool UFortGlobals::IsDisplayingTwitchViewerNamesAllowed() {
    return false;
}

bool UFortGlobals::IsBROnly() {
    return false;
}

bool UFortGlobals::IsAllContentInstalled(const ESubGame SubGame) {
    return false;
}

bool UFortGlobals::IsAccountLinkingUIURLButtonEnabled() {
    return false;
}

bool UFortGlobals::IsAccountLinkingEnabled() {
    return false;
}

bool UFortGlobals::InstallStWTutorialContent() {
    return false;
}

bool UFortGlobals::InstallGameFeatureContent(const EFortGameFeature GameFeature) {
    return false;
}

bool UFortGlobals::InstallAllOnDemandContent(const ESubGame SubGame) {
    return false;
}

void UFortGlobals::HandleClientUpdateRequired(EFortClientUpdateType Type, bool RequestExit) {
}

bool UFortGlobals::GetUseLegacyMediaSourceForCreative() {
    return false;
}

bool UFortGlobals::GetUseLegacyMediaSource() {
    return false;
}

float UFortGlobals::GetTimeLimitForWatchBattlePassMovie(ETimeLimitForReplayCinematic TimeLimitForWatchBattlePassMovie) {
    return 0.0f;
}

float UFortGlobals::GetTimeLimitForReplayCinematic(ETimeLimitForReplayCinematic TimeLimitForReplayCinematic) {
    return 0.0f;
}

TEnumAsByte<EPhysicalSurface> UFortGlobals::GetSurfaceType(const FHitResult& Hit) {
    return SurfaceType_Default;
}

EContentInstallState UFortGlobals::GetStWTutorialContentInstallState() {
    return EContentInstallState::NotInstalled;
}

EFortStartupPhase UFortGlobals::GetStartupPhase() {
    return EFortStartupPhase::InitializingEngine;
}

FGameplayTagContainer UFortGlobals::GetRiskyReelsPlaylistBlacklistFilter() {
    return FGameplayTagContainer{};
}

bool UFortGlobals::GetPapayaSpeakersEnabled() {
    return false;
}

EContentInstallState UFortGlobals::GetOnDemandContentInstallState(const ESubGame SubGame) {
    return EContentInstallState::NotInstalled;
}

int32 UFortGlobals::GetMinTheaterListRefreshDelay() {
    return 0;
}

int64 UFortGlobals::GetMemoryRequirementForMediaStreamingMB() {
    return 0;
}

int32 UFortGlobals::GetMaxTheaterListRefreshDelay() {
    return 0;
}

FContentInstallError UFortGlobals::GetLastOnDemandContentInstallError() {
    return FContentInstallError{};
}

TArray<FName> UFortGlobals::GetIronCityWargameTagList() {
    return TArray<FName>();
}

bool UFortGlobals::GetIronCityEndlessEnabled() {
    return false;
}

bool UFortGlobals::GetIronCityEnabled() {
    return false;
}

float UFortGlobals::GetGlobalSnowRadius() {
    return 0.0f;
}

FVector UFortGlobals::GetGlobalSnowOrigin() {
    return FVector{};
}

float UFortGlobals::GetGlobalSnowAltitude() {
    return 0.0f;
}

EContentInstallState UFortGlobals::GetGameFeatureContentInstallState(const EFortGameFeature GameFeature) {
    return EContentInstallState::NotInstalled;
}

bool UFortGlobals::GetForceBuildingActorRecordUpdatesEnabled() {
    return false;
}

float UFortGlobals::GetDoubleClickTime(const UObject* WorldContextObject) {
    return 0.0f;
}

ESubGame UFortGlobals::GetCurrentSubGame(const UObject* WorldContextObject) {
    return ESubGame::Campaign;
}

FString UFortGlobals::GetAccountLinkingUIURL() {
    return TEXT("");
}

EFortAccountLinkingUIConfig UFortGlobals::GetAccountLinkingUIConfig() {
    return EFortAccountLinkingUIConfig::Disabled;
}

float UFortGlobals::GameFeatureContentInstallationProgress(const EFortGameFeature GameFeature) {
    return 0.0f;
}

float UFortGlobals::ContentInstallationProgress(const ESubGame SubGame) {
    return 0.0f;
}

bool UFortGlobals::AreFriendCodesEnabled() {
    return false;
}

bool UFortGlobals::AllowContainersInCreativeItemLists() {
    return false;
}


