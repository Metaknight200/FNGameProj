#include "FortGameUserSettings.h"

UFortGameUserSettings::UFortGameUserSettings() {
    this->MouseSensitivity = 0.07f;
    this->FortVersion = 2;
    this->UnlockConsoleFPS = false;
    this->LastAppliedUnlockConsoleFPS = false;
    this->SubGameSelectCount_Athena = 186;
    this->SubGameSelectCount_Campaign = 1;
    this->SafeZone = 1.00f;
    this->bIsSafeZoneSet = false;
    this->CachedPlayerLevel = 100;
    this->CachedBattleStars = 100000;
    this->CachedAlienStylePoints = 0;
    this->CachedHighestBattlePassUnlockedPage = 10;
    this->bShowCareerTabBang = false;
    this->bMotionBlur = false;
    this->bShowGrass = true;
    this->bShowFPS = true;
    this->bUseGPUCrashDebugging = false;
    this->bLatencyTweak1 = false;
    this->LatencyTweak2 = 0;
    this->bLatencyFlash = false;
    this->DLSSQuality = 0;
    this->bRayTracing = false;
    this->RayTracingShadowsQuality = true;
    this->RayTracingReflectionsQuality = 2;
    this->RayTracingAmbientOcclusionQuality = true;
    this->RayTracingAOQuality = 1;
    this->RayTracingGIQuality = 0;
    this->b120FpsMode = false;
    this->DisplayGamma = 2.20f;
    this->UserInterfaceContrast = 1.00f;
    this->BattlePassOverrideTracker = 0;
    this->CrewBlingItemShopViolatorUnlockedStagesWhenDisplayed = -1;
    this->bHasSeenCrewBlingTabBangs = false;
    this->bHasSeenDonutShopSequence = false;
    this->DonutIdleGameHighScore = 0.00f;
    this->LastSelectedFillOption = true;
    this->bLastSelectedPrivateMatchOption = false;
    this->bHasSeenCreativePhoneTutorial = false;
    this->bHasSeenCreativeHeatmapTutorial = false;
    this->CreativeOptionLastUsedCategory = 0;
    this->CreativeOptionLastUsedIndexInCategory = 0;
    this->LastNewsVersionViewedBR = TEXT("2021-09-14T16:31:00.888Z");
    this->LastNewsVersionViewedSTW = TEXT("2019-10-30T20:17:48.789Z");
    this->LastPRMEtag = TEXT("W/\"6f6-tVsYA9Q55j7nvt/tCU+9UpxR7Ec\"");
    this->LastFrontEndBackPlateStageUsed[0] = TEXT("season17");
    this->LastFrontEndBackPlateStageUsed[1] = TEXT("season17");
    this->bEulaAccepted = true;
    this->EulaAcceptedUserId = TEXT("691850d7fad24a448ccbc30d200513f6");
    this->bTimesSeenBacchusLoadTutorial = 0;
    this->bHasSeenTapToShoot = false;
    this->NumTimesSeeingPanningTip = 0;
    this->bDesiredHeadphoneMode = false;
    this->bUseHeadphoneMode = false;
    this->InitialBenchmarkState = 1;
    this->bDisableMouseAcceleration = false;
    this->ChosenLoginType = ESavedAccountType::None;
    this->SocialImportOptedOutVersion = 0;
    this->VKImportOptedOutVersion = 0;
    this->bHasSeenErebusSocialImport = false;
    this->bHasSeenFriendImportToast = false;
    this->bAutoImportFriendEnabled = false;
    this->bSeenLetoSellModal = false;
    this->SocialImportPromptCountCurrentVersion = 0;
    this->SocialImportPromptCountAllVersions = 0;
    this->VKImportPromptCountCurrentVersion = 0;
    this->VKImportPromptCountAllVersions = 0;
    this->bSocialImportDisplayed = false;
    this->bAccountItemWarningShownThisLaunch = false;
    this->bMultiFactorAuthModalOpOut = false;
    this->MobileRecommendationDismissedVersion = 0;
    this->ShowLiveStreamPictureInPictureInMatchV2 = EShowInGamePictureInPicture::Default;
    this->CurrentLivePiPStreamOverrideCounter = 0;
    this->bNeverShowMobileLink = false;
    this->bHasShownMobileLink = false;
    this->bDesiredAllowLowPowerMode = false;
    this->bDesiredAllowMultithreadedRendering = true;
    this->bHasMigratedDownloadSettings = false;
    this->bSendAppsFlyerEventOnInstallation = true;
    this->bAllowFullGameDownload = false;
    this->bAllowFullGameDownloadOverride = false;
    this->bAllowElectraPlayerDownload = false;
    this->bAllowElectraPlayerDownloadOverride = false;
    this->bAllowCellularDownload = false;
    this->bAutoDownloadHighResTextures = true;
    this->LastAutoDownloadHighResTextureReminder = 0;
    this->bResumeUserCanceledOrPausedDownload = false;
    this->bForceNoPatchingForDownloads = false;
    this->bAutoLaunchFullGame = false;
    this->bAllowDownloadHighResMips = true;
    this->bAllowLowPowerMode = false;
    this->bAllowVideoPlayback = true;
    this->bAllowMultithreadedRendering = true;
    this->MobileFPSMode = EFortMobileFPSMode::Mode_30Fps;
    this->bHasSeenSamsungPressureSensorWarning = false;
    this->bNeverDisplaySamsungPressureSensorWarning = false;
    this->bHasRecentlySeenBadMatchPopup = false;
    this->MatchesSinceLastBadMatchPopup = 0;
    this->bHasAlreadyRatedOnGooglePlay = false;
    this->DaysToSnoozeBeforeNextGooglePlayRating = 0;
    this->GooglePlayRatingDelayedOccurences = 0;
    this->bShowTemperature = false;
    this->LastYearForcedDisplayWinterfestInfoButton = 0;
    this->bHasSeenSidekickWelcomePopup = false;
    this->bPCMigratedToNextGenScalability = true;
}

void UFortGameUserSettings::ToggleScalabilityMode(EFortScalabilityMode Mode, bool bEnabled, bool bForceApply, bool bApplyImmediately) {
}

void UFortGameUserSettings::SetUserInterfaceContrast(float InContrast) {
}

void UFortGameUserSettings::SetUseLatencyTweak2(int32 InLatencyTweak2) {
}

void UFortGameUserSettings::SetUseLatencyTweak1(bool bEnabled) {
}

void UFortGameUserSettings::SetUseLatencyFlash(bool bEnabled) {
}

void UFortGameUserSettings::SetUseGPUCrashDebugging(bool bEnabled) {
}

void UFortGameUserSettings::SetShowTemperature(bool bNewValue) {
}

void UFortGameUserSettings::SetShowCareerTabBang(bool Value) {
}

void UFortGameUserSettings::SetSafeZone(float Value) {
}

void UFortGameUserSettings::SetResolutionFraction(float ResolutionFraction) {
}

void UFortGameUserSettings::SetRenderingAPISelection(ERHIType InRenderingAPI) {
}

void UFortGameUserSettings::SetRayTracingShadowsQuality(bool InRayTracingShadowsQuality) {
}

void UFortGameUserSettings::SetRayTracingReflectionsQuality(int32 InRayTracingReflectionsQuality) {
}

void UFortGameUserSettings::SetRayTracingGIQuality(int32 InRayTracingGIQuality) {
}

void UFortGameUserSettings::SetRayTracingEnabled(bool bEnable) {
}

void UFortGameUserSettings::SetRayTracingAmbientOcclusionQuality(int32 InRayTracingAmbientOcclusionQuality) {
}

void UFortGameUserSettings::SetMobileFPSMode(const EFortMobileFPSMode Mode) {
}

void UFortGameUserSettings::SetMeshQuality(int32 Value) {
}

void UFortGameUserSettings::SetLastSelectedFillOption(bool FillOption) {
}

void UFortGameUserSettings::SetHasSeenTapToShoot(bool bHasSeenIt) {
}

void UFortGameUserSettings::SetHasSeenPanningTip(bool bHasSeenIt) {
}

void UFortGameUserSettings::SetHasSeenCreativePhoneTutorial(bool NewBHasSeenCreativePhoneTutorial) {
}

void UFortGameUserSettings::SetHasSeenCreativeHeatmapTutorial(bool NewBHasSeenCreativeHeatmapTutorial) {
}

void UFortGameUserSettings::SetDonutShopSequenceMarkedAsSeen(bool bHasSeen) {
}

void UFortGameUserSettings::SetDLSSQuality(int32 InDLSSQuality) {
}

void UFortGameUserSettings::SetDisplayGamma(float InGamma) {
}

void UFortGameUserSettings::SetCachedPlayerLevel(int32 Value) {
}

void UFortGameUserSettings::SetCachedHighestBattlePassUnlockedPage(int32 Value) {
}

void UFortGameUserSettings::SetCachedBattleStars(int32 Value) {
}

void UFortGameUserSettings::SetCachedAlienStylePoints(int32 Value) {
}

void UFortGameUserSettings::SetAutoDownloadHighResTextures(bool bValue) {
}

void UFortGameUserSettings::SetAudioOutputDeviceId(const FString& InAudioOutputDeviceId) {
}

void UFortGameUserSettings::ResetToDefaultDeviceScalability() {
}

void UFortGameUserSettings::ResetScalabilityModes() {
}

bool UFortGameUserSettings::IsVideoPlaybackAllowed() {
    return false;
}

bool UFortGameUserSettings::IsInPerformanceMode() const {
    return false;
}

bool UFortGameUserSettings::IsHeadphoneModeEnabled() const {
    return false;
}

bool UFortGameUserSettings::HasRecordedStat(const FName& RecordName) const {
    return false;
}

float UFortGameUserSettings::GetUserInterfaceContrast() const {
    return UserInterfaceContrast;
}

int32 UFortGameUserSettings::GetUseLatencyTweak2() const {
    return 0;
}

bool UFortGameUserSettings::GetUseLatencyTweak1() const {
    return false;
}

bool UFortGameUserSettings::GetUseLatencyFlash() const {
    return false;
}

bool UFortGameUserSettings::GetUseGPUCrashDebugging() const {
    return bUseGPUCrashDebugging;
}

bool UFortGameUserSettings::GetShowTemperature() const {
    return bShowTemperature;
}

bool UFortGameUserSettings::GetShowCareerTabBang() const {
    return bShowCareerTabBang;
}

float UFortGameUserSettings::GetSafeZone() const {
    return SafeZone;
}

float UFortGameUserSettings::GetResolutionFraction() const {
    return 0.0f;
}

ERHIType UFortGameUserSettings::GetRenderingAPISelection() const {
    return ERHIType::D3D11;
}

ERHIType UFortGameUserSettings::GetRenderingAPI() const {
    return ERHIType::D3D11;
}

bool UFortGameUserSettings::GetRayTracingShadowsQuality() const {
    return RayTracingShadowsQuality;
}

int32 UFortGameUserSettings::GetRayTracingReflectionsQuality() const {
    return RayTracingReflectionsQuality;
}

int32 UFortGameUserSettings::GetRayTracingGIQuality() const {
    return RayTracingGIQuality;
}

bool UFortGameUserSettings::GetRayTracingEnabled() const {
    return false;
}

int32 UFortGameUserSettings::GetRayTracingAmbientOcclusionQuality() const {
    return 0;
}

int32 UFortGameUserSettings::GetMeshQuality() const {
    return 0;
}

bool UFortGameUserSettings::GetLastSelectedFillOption() const {
    return LastSelectedFillOption;
}

bool UFortGameUserSettings::GetHasSeenTapToShoot() const {
    return bHasSeenTapToShoot;
}

bool UFortGameUserSettings::GetHasSeenPanningTip() const {
    return false;
}

bool UFortGameUserSettings::GetHasSeenCreativePhoneTutorial() const {
    return bHasSeenCreativePhoneTutorial;
}

bool UFortGameUserSettings::GetHasSeenCreativeHeatmapTutorial() const {
    return bHasSeenCreativeHeatmapTutorial;
}

FFireModeData UFortGameUserSettings::GetFireModeData() const {
    return FFireModeData{};
}

int32 UFortGameUserSettings::GetDLSSQuality() const {
    return DLSSQuality;
}

bool UFortGameUserSettings::GetDLSSEnabled() const {
    return false;
}

float UFortGameUserSettings::GetDisplayGamma() const {
    return DisplayGamma;
}

int32 UFortGameUserSettings::GetCachedPlayerLevel() const {
    return CachedPlayerLevel;
}

int32 UFortGameUserSettings::GetCachedHighestBattlePassUnlockedPage() const {
    return CachedHighestBattlePassUnlockedPage;
}

int32 UFortGameUserSettings::GetCachedBattleStars() const {
    return CachedBattleStars;
}

int32 UFortGameUserSettings::GetCachedAlienStylePoints() const {
    return CachedAlienStylePoints;
}

bool UFortGameUserSettings::GetAutoDownloadHighResTextures() const {
    return false;
}

FString UFortGameUserSettings::GetAudioOutputDeviceId() const {
    return TEXT("");
}


