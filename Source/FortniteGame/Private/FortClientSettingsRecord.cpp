#include "FortClientSettingsRecord.h"

UFortClientSettingsRecord::UFortClientSettingsRecord() {
    this->bHighResTexturesReminderEnabled = true;
    this->HUDScale = 1.00f;
    this->InitialHUDScale = 1.00f;
    this->bAutoHideBuildingMaterials = false;
    this->ShowPickupDotsOnMapByRarity = EFortRarity::Rare;
    this->GamepadMoveStickDeadZone = 0.24f;
    this->GamepadLookStickDeadZone = 0.27f;
    this->TargetingSlow = 1.00f;
    this->ScopedSlow = 1.00f;
    this->GamepadTargetingSlow = 0.65f;
    this->GamepadScopedSlow = 0.65f;
    this->GamepadBuildingMultiplier = 1.00f;
    this->GamepadEditModeMultiplier = 1.00f;
    this->MotionTargetingSlow = 0.30f;
    this->MotionScopedSlow = 0.05f;
    this->MotionHarvestingToolSlow = 0.50f;
    this->MouseSensitivity = 0.07f;
    this->MouseSensitivityX = 0.07f;
    this->MouseSensitivityY = 0.07f;
    this->MouseSensitivityMultiplierForAircraftValue = 2.00f;
    this->InitialMouseSensitivityMultiplierForAircraft = 2.00f;
    this->TouchLookAccelerationMultiplier = 1.00f;
    this->TouchLookSensitivitySetting = 0.40f;
    this->TouchTargetingSlow = 0.80f;
    this->TouchScopedSlow = 0.80f;
    this->TouchBuildingMultiplier = 1.00f;
    this->TouchEditModeMultiplier = 1.00f;
    this->TouchVerticalMultiplier = 1.00f;
    this->bMotionControlsEnabled = false;
    this->MotionYawAxis = EFortMotionYawAxis::Roll;
    this->MotionYawAxisMobile = EFortMotionYawAxis::Yaw;
    this->GyroSensitivity = 0.20f;
    this->InputKBMPresetNameForCampaign = TEXT("ConfigKBM_Campaign");
    this->InputKBMPresetNameForAthena = TEXT("ConfigKBM_Athena");
    this->InputPresetNameForCampaign = TEXT("ConfigG");
    this->InputPresetNameForAthena = TEXT("ConfigG_Athena");
    this->InputPresetNameForAthenaMobile = TEXT("ConfigG_Athena");
    this->InputTemplatePresetNameForCampaign = TEXT("ConfigG");
    this->InputTemplatePresetNameForAthena = TEXT("ConfigG_Athena");
    this->XboxSafeZone = 1.00f;
    this->bInvertedLook = false;
    this->bInvertedLookMobile = false;
    this->bInvertedPitchForMotion = false;
    this->bInvertedPitchForAircraftPrimary = true;
    this->bInvertedPitchForAircraftSecondary = false;
    this->bInvertedYaw = false;
    this->bInvertedYawMobile = false;
    this->bInvertedYawForMotion = false;
    this->bToggleSprint = false;
    this->bSprintByDefault = true;
    this->bSprintByDefaultMobile = true;
    this->bSprintCancelsReload = false;
    this->bTapInteractEnabled = false;
    this->TouchInteractionMode = ETouchInteractMode::Buttons;
    this->bTargetingToggleable = false;
    this->bTargetingToggleableMobile = true;
    this->bAutoEquipBetterItems = true;
    this->bAimAssistEnabled = true;
    this->bTouchAimAssistEnabled = true;
    this->bTouchEditEnabled = true;
    this->bEditConfirmOnReleaseEnabled = false;
    this->bQuickEditEnabled = true;
    this->bForceFeedbackEnabled = true;
    this->bTriggerHapticsEnabled = false;
    this->bTriggerPullUsesHapticThreshold = true;
    this->TriggerHapticStrength = 8;
    this->TriggerHapticStartPosition = 0;
    this->bDeviceFeedbackBlockedWithAttachedController = true;
    this->bContextTutorialEnabled = true;
    this->bBuildingPossessionShown = false;
    this->bLocalNotificationsEnabled = true;
    this->bUseFirstPersonCamera = false;
    this->bUseGamepadEditModeAimAssist = true;
    this->bUseHoldToSwapPickup = false;
    this->bUseGamepadAutoRun = true;
    this->bFocusOnFirstBuildingPieceWhenQuickbarSwapped = true;
    this->bNewFocusOnFirstBuildingPieceWhenQuickbarSwapped = true;
    this->bFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena = false;
    this->bNewFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena = false;
    this->bDisablePreEditsWhenPlacingBuilding = false;
    this->bTurboBuild = true;
    this->bTurboBuildMobile = true;
    this->bCreativeTurboDelete = true;
    this->bAutoChangeMaterial = true;
    this->bAutoChangeMaterialMobile = true;
    this->bAutoOpenDoors = true;
    this->bAutoOpenDoorsNonMobile = false;
    this->bAutoPickupWeapons = true;
    this->bAutoPickupWeaponsConsolePC = false;
    this->bEnablePreferredItemSlots = true;
    this->bAutoSortConsumablesToRight = false;
    this->bEnableTryBuildOnFocus = false;
    this->EditButtonHoldTime = 0.20f;
    this->bUnlockConsoleFPS = false;
    this->bConsoleFPS60 = true;
    this->LastPartyType = EPartyType::Public;
    this->bLastLeaderInvitesOnly = false;
    this->bLastLeaderFriendsOnly = false;
    this->bAudioVolumesInitialized = false;
    this->MusicVolume = 1.00f;
    this->SoundFXVolume = 1.00f;
    this->PIPVolume = 1.00f;
    this->DialogVolume = 1.00f;
    this->ChatVolume = 1.00f;
    this->CinematicsVolume = 1.00f;
    this->bEnableSubtitles = true;
    this->SubtitleTextSize = ESubtitleDisplayTextSize::Medium;
    this->SubtitleTextColor = ESubtitleDisplayTextColor::White;
    this->SubtitleTextBorder = ESubtitleDisplayTextBorder::None;
    this->SubtitleBackgroundOpacity = ESubtitleDisplayBackgroundOpacity::Medium;
    this->bEnableVoiceChat = true;
    this->bEnableVoiceChat3D = true;
    this->bEnableVoiceChatPTT = true;
    this->bCanVoiceChatWithUnknowns = true;
    this->bEnableHousepartyCasting = true;
    this->bEnablePeripheralLighting = true;
    this->bShowViewerCount = true;
    this->bAnonymousMode = false;
    this->bAnonymousCharacterMode = false;
    this->bShowSeasonLevel = false;
    this->bHideOtherPlayerNames = false;
    this->HiddenMatchmakingDelayMaxSeconds = 0;
    this->bReplayRecordingEnabled = true;
    this->bLargeTeamReplayRecordingEnabled = false;
    this->bCreativeModeReplayRecordingEnabled = false;
    this->bShadowPlayHighlightsEnabled = true;
    this->bPlaceDangerMarkerWhenTargeting = true;
    this->bShowGlobalChatEnabled = true;
    this->InitialGammaValue = 2.20f;
    this->bInitialUseTapToShoot = false;
    this->bInitialAutoOpenDoors = true;
    this->bInitialAutoPickupWeapons = true;
    this->bInitialAutoPickupWeaponsConsolePC = false;
    this->bInitialEnablePreferredItemSlots = true;
    this->bInitialAutoSortConsumablesToRight = false;
    this->bInitialEnableTryBuildOnFocus = false;
    this->InitialEditButtonHoldTime = 0.20f;
    this->bStWQuickbarUpdated = false;
    this->bShouldShowBothQuickbars = true;
    this->LicensedAudioTreatment = ELicensedAudioTreatment::None;
    this->ColorBlindMode = EColorBlindMode::Off;
    this->ColorBlindStrength = 0.00f;
    this->bVisualizeAudioSources = false;
    this->InitialColorBlindMode = EColorBlindMode::Off;
    this->InitialColorBlindStrength = 0.00f;
    this->bIgnoreGamepadInput = false;
    this->bInitialIgnoreGamepadInput = false;
    this->bLockPrimaryInputMethodToMouse = false;
    this->bLockPrimaryInputMethodToMouseInitial = false;
    this->bEnableRudderControl = false;
    this->RudderDeadZone = 0.01f;
    this->RudderMaxThrottle = 0.50f;
    this->SelectedRegionId = TEXT("NONE");
    this->LastKnownBestRegionId = TEXT("NONE");
    this->CrossplayPreference = 0;
    this->bAllowAudioInBackground = false;
    this->AllowAudioInBackground = EFortAllowBackgroundAudioSetting::Off;
    this->bUsePowerSavingMode = false;
    this->bHidePerkRecombobulatorHelp = false;
    this->bHideStwItemRefundHelp = false;
    this->SelectedAndroidAppStore = EAndroidAppStoreTypes::Unset;
    this->AndroidStoreSelectionRevision = 0;
    this->bHasDisabledAutoSlottingOfSurvivorSquadsAfterQuest = false;
    this->bHasEnabledAutoSlottingOfSurvivorSquadsDuringOnboarding = false;
    this->bWantsAutoSlottingOfSurvivorSquads = false;
    this->bRequiresHUDConversion = false;
    this->QuestMapMode = EQuestMapScreenMode::MainCampaign;
    this->bAutoJoinGameServerChannel = false;
    this->bEnablePartyVoiceChannel = true;
    this->bEnableGameVoiceChannel = true;
    this->bAllowSidekickFeature1 = true;
    this->bShowVoiceIndicatorsNotifications = true;
    this->bHasCompletedGuidedTutorial = false;
    this->CapMipsExperimentVersion = -1;
    this->bHasCompletedHUDLayoutToolV2Tutorial = false;
    this->FortClientSettingRecord = false;
    this->bShowTemperature = false;
    this->bNotifyUsersWhenPlaying = true;
    this->bAllowFriendSubscriptionNudges = true;
    this->bPlayerSurveysAllowed = true;
    this->bUseSmallInventoryTiles = true;
    this->HasSeenCommunityVotingTutorial = false;
    this->LastSeenCommunityVotingTutorialVersion = 0;
    this->LastSeenReloadMtxIntroVersion = 0;
    this->QuestListSortType = 1;
    this->InZoneMapScreenTab = 0;
    this->bAutoExposureEnabled = true;
    this->ManualExposureBias = 0.00f;
    this->FocalLength = 35.00f;
    this->Aperture = 4.00f;
    this->bAutoFocusEnabled = true;
    this->ManualFocusDistance = 10000.00f;
    this->bPlayerOutlinesEnabled = false;
    this->bStormEffectsEnabled = true;
    this->SafeZoneOpacity = 1.00f;
    this->bRelevancyZoneVisible = false;
    this->bHighQualityFxEnabled = false;
    this->bDamageFxEnabled = false;
    this->ThirdPersonAutoFollowMode = EThirdPersonAutoFollowMode::Off;
    this->ThirdPersonDistanceToSubject = 0.25f;
    this->bThirdPersonCameraCollision = true;
    this->bShareLensSettings = false;
    this->bDroneIgnoreJump = true;
    this->bShowSessionIDWatermark = true;
    this->bBattleMapShowTimeIndicator = true;
    this->bBattleMapShowNearbyChests = false;
    this->bBattleMapShowAllSquadMembers = false;
    this->bBattleMapAutomaticCameraPlacement = false;
    this->bNamePlatesEnabled = false;
    this->bShowTeamColor = true;
    this->ViewDistance = 25000.00f;
    this->LowDetailDistance = 10000.00f;
    this->ArrowDistance = 15000.00f;
    this->bScalingOptionsEnabled = true;
    this->HighDetailScaleMin = 1.00f;
    this->HighDetailScaleMax = 1.20f;
    this->LowDetailScaleMin = 0.85f;
    this->LowDetailScaleMax = 1.00f;
    this->ArrowScaleMin = 0.30f;
    this->ArrowScaleMax = 0.60f;
    this->bArrowColorEnabled = false;
    this->SquadIdMode = ESpectatorSquadIdMode::HoldToDisplay;
    this->bDirty = false;
    this->bSaveToCloud = false;
    this->CloudFileState = ECloudFileState::Unitialized;
    this->bDisableCloudSave = 0;
    this->LastRequestSaveCount = 0;
    this->LastAttemptedSaveCount = 0;
    this->LastSaveAttemptTime = 0.00f;
    this->NextCloudSaveTime = 0.00f;
}

void UFortClientSettingsRecord::SetVoiceChatWithUnknownsEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetVoiceChatPTTEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetVoiceChatEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetVoiceChat3DEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetVisualizeAudioSources(bool bEnable) {
}

void UFortClientSettingsRecord::SetViewDistance(float InViewDistance) {
}

void UFortClientSettingsRecord::SetUsePowerSavingMode(bool bNewUsePowerSavingMode) {
}

void UFortClientSettingsRecord::SetUseLegacyControls(bool NewUseLegacyControls) {
}

void UFortClientSettingsRecord::SetUseHoldToSwapPickup(bool InUseHoldToSwapPickup) {
}

void UFortClientSettingsRecord::SetUseGamepadEditModeAimAssist(bool InUseGamepadEditModeAimAssist) {
}

void UFortClientSettingsRecord::SetUseGamepadAutoRun(bool InUseGamepadAutoRun) {
}

void UFortClientSettingsRecord::SetUseFirstPersonCamera(bool bUseFirstPerson) {
}

void UFortClientSettingsRecord::SetUseAdvancedOptions(bool NewUseAdvancedOptions) {
}

void UFortClientSettingsRecord::SetTurboBuild(const bool bNewValue) {
}

void UFortClientSettingsRecord::SetTriggerHapticsUseThreshold(bool bNewTriggerPullUsesHapticThreshold) {
}

void UFortClientSettingsRecord::SetTriggerHapticsStrength(uint8 NewTriggerHapticStrength) {
}

void UFortClientSettingsRecord::SetTriggerHapticsStartPosition(uint8 NewTriggerHapticStartPosition) {
}

void UFortClientSettingsRecord::SetTriggerHapticsEnabled(bool bNewTriggerHapticsEnabled) {
}

void UFortClientSettingsRecord::SetTouchVerticalMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetTouchTargetingMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetTouchScopedMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetTouchLookSensitivitySetting(float InSetting) {
}

void UFortClientSettingsRecord::SetTouchLookAccelerationMultiplier(float InSetting) {
}

void UFortClientSettingsRecord::SetTouchInteractMode(const ETouchInteractMode bNewMode) {
}

void UFortClientSettingsRecord::SetTouchEditModeMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetTouchEditEnabled(bool bTouchEdit) {
}

void UFortClientSettingsRecord::SetTouchBuildingMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetToggleSprint(bool bToggle) {
}

void UFortClientSettingsRecord::SetThirdPersonDistanceToSubject(float InThirdPersonDistanceToSubject) {
}

void UFortClientSettingsRecord::SetThirdPersonCameraCollision(bool bInThirdPersonCameraCollision) {
}

void UFortClientSettingsRecord::SetThirdPersonAutoFollowMode(EThirdPersonAutoFollowMode InThirdPersonAutoFollowMode) {
}

void UFortClientSettingsRecord::SetTargetingToggleableWithTouch(bool bToggle) {
}

void UFortClientSettingsRecord::SetTargetingToggleable(bool bToggle) {
}

void UFortClientSettingsRecord::SetTargetingMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetTapInteract(bool bTapInteract) {
}

void UFortClientSettingsRecord::SetSubtitlesTextSize(ESubtitleDisplayTextSize Value) {
}

void UFortClientSettingsRecord::SetSubtitlesTextColor(ESubtitleDisplayTextColor Value) {
}

void UFortClientSettingsRecord::SetSubtitlesTextBorder(ESubtitleDisplayTextBorder Value) {
}

void UFortClientSettingsRecord::SetSubtitlesEnabled(bool Value) {
}

void UFortClientSettingsRecord::SetSubtitlesBackgroundOpacity(ESubtitleDisplayBackgroundOpacity Value) {
}

void UFortClientSettingsRecord::SetStormEffectsEnabled(bool bInStormEffectsEnabled) {
}

void UFortClientSettingsRecord::SetSquadIdMode(ESpectatorSquadIdMode InSquadIdMode) {
}

void UFortClientSettingsRecord::SetSprintCancelsReload(bool bInSprintCancelsReload) {
}

void UFortClientSettingsRecord::SetSoundFXVolume(float InVolume) {
}

void UFortClientSettingsRecord::SetShowVoiceIndicators(bool bNewValue) {
}

void UFortClientSettingsRecord::SetShowViewerCountEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetShowTemperature(bool bNewValue) {
}

void UFortClientSettingsRecord::SetShowTeamColor(bool bInShowTeamColor) {
}

void UFortClientSettingsRecord::SetShowSessionIDWatermark(bool bInSessionIDWatermark) {
}

void UFortClientSettingsRecord::SetShowSeasonLevel(bool bEnable) {
}

void UFortClientSettingsRecord::SetShowPickupDotsOnMapByRarity(EFortRarity InRarity) {
}

void UFortClientSettingsRecord::SetShowGlobalChatEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetShouldSprintByDefault(bool bShouldSprintByDefault) {
}

void UFortClientSettingsRecord::SetShouldShowBothQuickbars(bool bNewValue) {
}

void UFortClientSettingsRecord::SetShareLensSettings(bool bInShareLensSettings) {
}

void UFortClientSettingsRecord::SetShadowPlayHighlightsEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetScopedMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetScalingOptionsEnabled(bool bInScalingOptionsEnabled) {
}

void UFortClientSettingsRecord::SetSafeZoneOpacity(float InSafeZoneOpacity) {
}

void UFortClientSettingsRecord::SetRudderMaxThrottle(float NewValue) {
}

void UFortClientSettingsRecord::SetRudderDeadZone(float NewValue) {
}

void UFortClientSettingsRecord::SetReplayRecordingEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetRelevancyZoneVisible(bool bInRelevancyZoneVisible) {
}

void UFortClientSettingsRecord::SetQuickEditEnabled(bool bNewQuickEditEnabled) {
}

void UFortClientSettingsRecord::SetPreferredItemTypeSlotIndex_5(const EFortPreferredItemSlotItemType ItemType) {
}

void UFortClientSettingsRecord::SetPreferredItemTypeSlotIndex_4(const EFortPreferredItemSlotItemType ItemType) {
}

void UFortClientSettingsRecord::SetPreferredItemTypeSlotIndex_3(const EFortPreferredItemSlotItemType ItemType) {
}

void UFortClientSettingsRecord::SetPreferredItemTypeSlotIndex_2(const EFortPreferredItemSlotItemType ItemType) {
}

void UFortClientSettingsRecord::SetPreferredItemTypeSlotIndex_1(const EFortPreferredItemSlotItemType ItemType) {
}

void UFortClientSettingsRecord::SetPlayerSurveysAllowed(bool Value) {
}

void UFortClientSettingsRecord::SetPlayerOutlinesEnabled(bool bInPlayerOutlinesEnabled) {
}

void UFortClientSettingsRecord::SetPlaceDangerMarkerWhenTargeting(bool bEnable) {
}

void UFortClientSettingsRecord::SetPIPVolume(float InVolume) {
}

void UFortClientSettingsRecord::SetPeripheralLightingEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetNotifyUsersWhenPlaying(const bool Value) {
}

void UFortClientSettingsRecord::SetNameplatesEnabled(bool bInNameplatesEnabled) {
}

void UFortClientSettingsRecord::SetMusicVolume(float InVolume) {
}

void UFortClientSettingsRecord::SetMouseSensitivityY(float InSensitivityY) {
}

void UFortClientSettingsRecord::SetMouseSensitivityX(float InSensitivityX) {
}

void UFortClientSettingsRecord::SetMouseSensitivityMultiplierForAircraft(float InSensitivityMultiplier) {
}

void UFortClientSettingsRecord::SetMotionYawAxisSetting(EFortMotionYawAxis InSetting) {
}

void UFortClientSettingsRecord::SetMotionTargetingMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetMotionScopedMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetMotionHarvestingToolMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetMotionControlsEnabledSetting(bool InSetting) {
}

void UFortClientSettingsRecord::SetManualFocusDistance(float InManualFocusDistance) {
}

void UFortClientSettingsRecord::SetManualExposureBias(float InManualExposureBias) {
}

void UFortClientSettingsRecord::SetLowDetailScaleMin(float InLowDetailScaleMin) {
}

void UFortClientSettingsRecord::SetLowDetailScaleMax(float InLowDetailScaleMax) {
}

void UFortClientSettingsRecord::SetLowDetailDistance(float InLowDetailDistance) {
}

void UFortClientSettingsRecord::SetLookVerticalSpeedAds(uint32 NewValue) {
}

void UFortClientSettingsRecord::SetLookVerticalSpeed(uint32 NewValue) {
}

void UFortClientSettingsRecord::SetLookVerticalBoostSpeedAds(uint32 NewValue) {
}

void UFortClientSettingsRecord::SetLookVerticalBoostSpeed(uint32 NewValue) {
}

void UFortClientSettingsRecord::SetLookSensitivityPresetAds(EFortGamepadSensitivity NewPreset) {
}

void UFortClientSettingsRecord::SetLookSensitivityPreset(EFortGamepadSensitivity NewPreset) {
}

void UFortClientSettingsRecord::SetLookInputCurve(EFortGamepadLookInputCurve NewValue) {
}

void UFortClientSettingsRecord::SetLookHorizontalSpeedAds(uint32 NewValue) {
}

void UFortClientSettingsRecord::SetLookHorizontalSpeed(uint32 NewValue) {
}

void UFortClientSettingsRecord::SetLookHorizontalBoostSpeedAds(uint32 NewValue) {
}

void UFortClientSettingsRecord::SetLookHorizontalBoostSpeed(uint32 NewValue) {
}

void UFortClientSettingsRecord::SetLookEditModeMultiplier(float NewValue) {
}

void UFortClientSettingsRecord::SetLookEaseTime(float NewValue) {
}

void UFortClientSettingsRecord::SetLookBuildModeMultiplier(float NewValue) {
}

void UFortClientSettingsRecord::SetLookBoostAccelerationTimeAds(float NewValue) {
}

void UFortClientSettingsRecord::SetLookBoostAccelerationTime(float NewValue) {
}

void UFortClientSettingsRecord::SetLockPrimaryInputMethodToMouse(bool bLock) {
}

void UFortClientSettingsRecord::SetLocalNotificationsEnabled(bool bEnabled) {
}

void UFortClientSettingsRecord::SetLicensedAudioTreatment(ELicensedAudioTreatment InLicensedAudioTreatment) {
}

void UFortClientSettingsRecord::SetLargeTeamReplayRecordingEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetInvertedYawForMotion(bool bInvert) {
}

void UFortClientSettingsRecord::SetInvertedYaw(bool bInvert) {
}

void UFortClientSettingsRecord::SetInvertedPitchForMotion(bool bInvert) {
}

void UFortClientSettingsRecord::SetInvertedPitchForAircraftSecondary(bool bInvert) {
}

void UFortClientSettingsRecord::SetInvertedPitchForAircraftPrimary(bool bInvert) {
}

void UFortClientSettingsRecord::SetInvertedPitch(bool bInvert) {
}

void UFortClientSettingsRecord::SetInstantBoostWhenBuilding(bool NewValue) {
}

void UFortClientSettingsRecord::SetIgnoreGamepadInput(bool bIgnore) {
}

void UFortClientSettingsRecord::SetHUDScaleMultiplier(float InHUDScaleMultiplier) {
}

void UFortClientSettingsRecord::SetHUDScale(float InScale) {
}

void UFortClientSettingsRecord::SetHousepartyCastingEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetHighResTexturesReminderEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetHighQualityFxEnabled(bool bInHighQualityFxEnabled) {
}

void UFortClientSettingsRecord::SetHighDetailScaleMin(float InHighDetailScaleMin) {
}

void UFortClientSettingsRecord::SetHighDetailScaleMax(float InHighDetailScaleMax) {
}

void UFortClientSettingsRecord::SetHideOtherPlayerNames(bool bEnable) {
}

void UFortClientSettingsRecord::SetHiddenMatchmakingDelayMax(int32 Value) {
}

void UFortClientSettingsRecord::SetHasAttendedEvent(const FString& Event) {
}

void UFortClientSettingsRecord::SetGyroLookSensitivitySetting(float InSetting) {
}

void UFortClientSettingsRecord::SetGamepadTargetingMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetGamepadScopedMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetGamepadMoveStickDeadZone(const float NewValue) {
}

void UFortClientSettingsRecord::SetGamepadLookStickDeadZone(const float NewValue) {
}

void UFortClientSettingsRecord::SetGamepadLookSensitivityY(float InSensitivity) {
}

void UFortClientSettingsRecord::SetGamepadLookSensitivityX(float InSensitivity) {
}

void UFortClientSettingsRecord::SetGamepadEditModeMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetGamepadBuildingMultiplier(float InMultiplier) {
}

void UFortClientSettingsRecord::SetFromVoiceChatSettings(ESelectableVoiceChatSetting InSetting) {
}

void UFortClientSettingsRecord::SetForceFeedbackEnabled(bool bForceFeedback) {
}

void UFortClientSettingsRecord::SetFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena(bool InFocusOnFirstBuildingPieceWhenQuickbarSwapped) {
}

void UFortClientSettingsRecord::SetFocusOnFirstBuildingPieceWhenQuickbarSwapped(bool InFocusOnFirstBuildingPieceWhenQuickbarSwapped) {
}

void UFortClientSettingsRecord::SetFocalLength(float InFocalLength) {
}

void UFortClientSettingsRecord::SetEnableTryBuildOnFocus(const bool bNewValue) {
}

void UFortClientSettingsRecord::SetEnableRudderControl(bool bEnable) {
}

void UFortClientSettingsRecord::SetEnablePreferredItemSlots(const bool bNewValue) {
}

void UFortClientSettingsRecord::SetEnablePartyVoiceChannel(bool bNewValue) {
}

void UFortClientSettingsRecord::SetEnableGameVoiceChannel(bool bNewValue) {
}

void UFortClientSettingsRecord::SetEditConfirmOnReleaseEnabled(bool bNewEditConfirmOnRelease) {
}

void UFortClientSettingsRecord::SetEditButtonHoldTime(const float NewValue) {
}

void UFortClientSettingsRecord::SetDroneIgnoreJump(bool bInDroneIgnoreJump) {
}

void UFortClientSettingsRecord::SetDisablePreEditsWhenPlacingBuilding(bool InDisablePreEditsWhenPlacingBuilding) {
}

void UFortClientSettingsRecord::SetDialogueVolume(float InVolume) {
}

void UFortClientSettingsRecord::SetDeviceFeedbackBlockedWithAttachedController(bool bForceFeedbackBlocked) {
}

void UFortClientSettingsRecord::SetDamageFxEnabled(bool bInDamageFxEnabled) {
}

void UFortClientSettingsRecord::SetCrossplayPreference(ECrossplayPreference NewPreference) {
}

void UFortClientSettingsRecord::SetCreativeTurboDelete(const bool bNewValue) {
}

void UFortClientSettingsRecord::SetCreativeModeReplayRecordingEnabled(bool bEnabled) {
}

void UFortClientSettingsRecord::SetContextTutorialEnabled(bool bEnabled) {
}

void UFortClientSettingsRecord::SetConsoleFPSUnlocked(bool bNewValue) {
}

void UFortClientSettingsRecord::SetColorBlindStrength(int32 InColorBlindStrength) {
}

void UFortClientSettingsRecord::SetColorBlindMode(EColorBlindMode InMode) {
}

void UFortClientSettingsRecord::SetCinematicsVolume(float InVolume) {
}

void UFortClientSettingsRecord::SetChatVolume(float InVolume) {
}

void UFortClientSettingsRecord::SetBuildingPossessionShown(bool bShown) {
}

void UFortClientSettingsRecord::SetBattleMapShowTimeIndicator(bool bInBattleMapShowTimeIndicator) {
}

void UFortClientSettingsRecord::SetBattleMapShowNearbyChests(bool bInBattleMapShowNearbyChests) {
}

void UFortClientSettingsRecord::SetBattleMapShowAllSquadMembers(bool bInBattleMapShowAllSquadMembers) {
}

void UFortClientSettingsRecord::SetBattleMapAutomaticCameraPlacement(bool bInBattleMapAutomaticCameraPlacement) {
}

void UFortClientSettingsRecord::SetAutoSortConsumablesToRight(const bool bNewValue) {
}

void UFortClientSettingsRecord::SetAutoPickupWeaponsConsolePC(const bool bNewValue) {
}

void UFortClientSettingsRecord::SetAutoPickupWeapons(const bool bNewValue) {
}

void UFortClientSettingsRecord::SetAutoOpenDoors(const bool bNewValue) {
}

void UFortClientSettingsRecord::SetAutoMulchMode(EFortAutoMulchCategory Category, EFortAutoMulchMode NewMode) {
}

void UFortClientSettingsRecord::SetAutoJoinGameVoiceChannel(bool bNewValue) {
}

void UFortClientSettingsRecord::SetAutoHideBuildingMaterials(bool InAutoHideBuildingMats) {
}

void UFortClientSettingsRecord::SetAutoFocusEnabled(bool bInAutoFocusEnabled) {
}

void UFortClientSettingsRecord::SetAutoExposureEnabled(bool bInAutoExposureEnabled) {
}

void UFortClientSettingsRecord::SetAutoEquipBetterItems(bool bAutoEquip) {
}

void UFortClientSettingsRecord::SetAutoChangeMaterial(const bool bNewValue) {
}

void UFortClientSettingsRecord::SetAttendingSocialEvent(int32 EventId, bool bAttending) {
}

void UFortClientSettingsRecord::SetArrowScaleMin(float InArrowDetailScaleMin) {
}

void UFortClientSettingsRecord::SetArrowScaleMax(float InArrowScaleMax) {
}

void UFortClientSettingsRecord::SetArrowDistance(float InArrowDistance) {
}

void UFortClientSettingsRecord::SetArrowColorEnabled(bool bInArrowColorEnabled) {
}

void UFortClientSettingsRecord::SetAperture(float InAperture) {
}

void UFortClientSettingsRecord::SetAnonymousModeEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetAnonymousCharacterModeEnabled(bool bEnable) {
}

void UFortClientSettingsRecord::SetAllowSidekickFeature1(bool bNewValue) {
}

void UFortClientSettingsRecord::SetAllowFriendSubscriptionNudges(bool bAllow) {
}

void UFortClientSettingsRecord::SetAllowAudioInBackgroundSetting(EFortAllowBackgroundAudioSetting Value) {
}

void UFortClientSettingsRecord::SetAimAssistStrength(uint32 NewValue) {
}

void UFortClientSettingsRecord::SetAimAssistEnabled(const bool bNewValue) {
}

bool UFortClientSettingsRecord::IsUsingHoldToSwapPickup() const {
    return false;
}

bool UFortClientSettingsRecord::IsUsingGamepadEditModeAimAssist() const {
    return false;
}

bool UFortClientSettingsRecord::IsUsingGamepadAutoRun() const {
    return false;
}

bool UFortClientSettingsRecord::IsPreferredItemSlotsEnabled() const {
    return false;
}

bool UFortClientSettingsRecord::GetVoiceChatWithUnknownsEnabled() const {
    return false;
}

ESelectableVoiceChatSetting UFortClientSettingsRecord::GetVoiceChatSettings() const {
    return ESelectableVoiceChatSetting::Off;
}

bool UFortClientSettingsRecord::GetVoiceChatPTTEnabled() const {
    return false;
}

bool UFortClientSettingsRecord::GetVoiceChatEnabled() const {
    return false;
}

bool UFortClientSettingsRecord::GetVoiceChat3DEnabled() const {
    return false;
}

bool UFortClientSettingsRecord::GetVisualizeAudioSources() const {
    return bVisualizeAudioSources;
}

bool UFortClientSettingsRecord::GetUsePowerSavingMode() const {
    return bUsePowerSavingMode;
}

bool UFortClientSettingsRecord::GetUseFirstPersonCamera() const {
    return bUseFirstPersonCamera;
}

bool UFortClientSettingsRecord::GetTurboBuild() const {
    return false;
}

bool UFortClientSettingsRecord::GetTriggerHapticsUseThreshold() const {
    return false;
}

uint8 UFortClientSettingsRecord::GetTriggerHapticsStrength() const {
    return 0;
}

uint8 UFortClientSettingsRecord::GetTriggerHapticsStartPosition() const {
    return 0;
}

bool UFortClientSettingsRecord::GetTriggerHapticsEnabled() const {
    return false;
}

float UFortClientSettingsRecord::GetTouchVerticalMultiplier() const {
    return TouchVerticalMultiplier;
}

float UFortClientSettingsRecord::GetTouchTargetingMultiplier() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetTouchScopedMultiplier() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetTouchLookSensitivitySetting() const {
    return TouchLookSensitivitySetting;
}

float UFortClientSettingsRecord::GetTouchLookAccelerationMultiplier() const {
    return TouchLookAccelerationMultiplier;
}

ETouchInteractMode UFortClientSettingsRecord::GetTouchInteractionMode() const {
    return ETouchInteractMode::Off;
}

float UFortClientSettingsRecord::GetTouchEditModeMultiplier() const {
    return TouchEditModeMultiplier;
}

bool UFortClientSettingsRecord::GetTouchEditEnabled() const {
    return bTouchEditEnabled;
}

float UFortClientSettingsRecord::GetTouchBuildingMultiplier() const {
    return TouchBuildingMultiplier;
}

bool UFortClientSettingsRecord::GetToggleSprint() const {
    return bToggleSprint;
}

bool UFortClientSettingsRecord::GetTargetingToggleableWithTouch() const {
    return false;
}

bool UFortClientSettingsRecord::GetTargetingToggleable() const {
    return bTargetingToggleable;
}

float UFortClientSettingsRecord::GetTargetingMultiplier() const {
    return 0.0f;
}

bool UFortClientSettingsRecord::GetTapInteract() const {
    return false;
}

ESubtitleDisplayTextSize UFortClientSettingsRecord::GetSubtitlesTextSize() const {
    return ESubtitleDisplayTextSize::ExtraSmall;
}

ESubtitleDisplayTextColor UFortClientSettingsRecord::GetSubtitlesTextColor() const {
    return ESubtitleDisplayTextColor::White;
}

ESubtitleDisplayTextBorder UFortClientSettingsRecord::GetSubtitlesTextBorder() const {
    return ESubtitleDisplayTextBorder::None;
}

bool UFortClientSettingsRecord::GetSubtitlesEnabled() const {
    return false;
}

ESubtitleDisplayBackgroundOpacity UFortClientSettingsRecord::GetSubtitlesBackgroundOpacity() const {
    return ESubtitleDisplayBackgroundOpacity::Clear;
}

bool UFortClientSettingsRecord::GetSprintCancelsReload() const {
    return bSprintCancelsReload;
}

float UFortClientSettingsRecord::GetSoundFXVolume() const {
    return SoundFXVolume;
}

bool UFortClientSettingsRecord::GetShowVoiceIndicators() const {
    return false;
}

bool UFortClientSettingsRecord::GetShowViewerCountEnabled() const {
    return false;
}

bool UFortClientSettingsRecord::GetShowTemperature() const {
    return bShowTemperature;
}

bool UFortClientSettingsRecord::GetShowSeasonLevel() const {
    return bShowSeasonLevel;
}

EFortRarity UFortClientSettingsRecord::GetShowPickupDotsOnMapByRarity() const {
    return EFortRarity::Common;
}

bool UFortClientSettingsRecord::GetShowGlobalChatEnabled() const {
    return bShowGlobalChatEnabled;
}

bool UFortClientSettingsRecord::GetShouldSprintByDefault() const {
    return false;
}

bool UFortClientSettingsRecord::GetShouldShowBothQuickbars() const {
    return bShouldShowBothQuickbars;
}

bool UFortClientSettingsRecord::GetShadowPlayHighlightsEnabled() const {
    return false;
}

float UFortClientSettingsRecord::GetScopedMultiplier() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetRudderMaxThrottle() const {
    return RudderMaxThrottle;
}

float UFortClientSettingsRecord::GetRudderDeadZone() const {
    return RudderDeadZone;
}

bool UFortClientSettingsRecord::GetReplayRecordingEnabled() const {
    return bReplayRecordingEnabled;
}

bool UFortClientSettingsRecord::GetQuickEditEnabled() const {
    return bQuickEditEnabled;
}

void UFortClientSettingsRecord::GetPreferredSlotIndicesFromDefinition(const UFortWorldItemDefinition* WorldItemDefinition, TArray<int32>& OutIndices) const {
}

void UFortClientSettingsRecord::GetPreferredSlotIndices(const EFortPreferredItemSlotItemType ItemType, TArray<int32>& OutIndices) const {
}

EFortPreferredItemSlotItemType UFortClientSettingsRecord::GetPreferredItemTypeSlotIndex_5() {
    return EFortPreferredItemSlotItemType::Unassigned;
}

EFortPreferredItemSlotItemType UFortClientSettingsRecord::GetPreferredItemTypeSlotIndex_4() {
    return EFortPreferredItemSlotItemType::Unassigned;
}

EFortPreferredItemSlotItemType UFortClientSettingsRecord::GetPreferredItemTypeSlotIndex_3() {
    return EFortPreferredItemSlotItemType::Unassigned;
}

EFortPreferredItemSlotItemType UFortClientSettingsRecord::GetPreferredItemTypeSlotIndex_2() {
    return EFortPreferredItemSlotItemType::Unassigned;
}

EFortPreferredItemSlotItemType UFortClientSettingsRecord::GetPreferredItemTypeSlotIndex_1() {
    return EFortPreferredItemSlotItemType::Unassigned;
}

bool UFortClientSettingsRecord::GetPlayerSurveysAllowed() const {
    return bPlayerSurveysAllowed;
}

bool UFortClientSettingsRecord::GetPlaceDangerMarkerWhenTargeting() const {
    return bPlaceDangerMarkerWhenTargeting;
}

float UFortClientSettingsRecord::GetPIPVolume() const {
    return PIPVolume;
}

bool UFortClientSettingsRecord::GetPeripheralLightingEnabled() const {
    return false;
}

bool UFortClientSettingsRecord::GetNotifyUsersWhenPlaying() const {
    return bNotifyUsersWhenPlaying;
}

float UFortClientSettingsRecord::GetMusicVolume() const {
    return MusicVolume;
}

float UFortClientSettingsRecord::GetMouseSensitivityY() const {
    return MouseSensitivityY;
}

float UFortClientSettingsRecord::GetMouseSensitivityX() const {
    return MouseSensitivityX;
}

float UFortClientSettingsRecord::GetMouseSensitivityMultiplierForAircraft() const {
    return 0.0f;
}

EFortMotionYawAxis UFortClientSettingsRecord::GetMotionYawAxisSetting() const {
    return EFortMotionYawAxis::Yaw;
}

float UFortClientSettingsRecord::GetMotionTargetingMultiplier() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetMotionScopedMultiplier() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetMotionHarvestingToolMultiplier() const {
    return 0.0f;
}

bool UFortClientSettingsRecord::GetMotionControlsEnabledSetting() const {
    return false;
}

bool UFortClientSettingsRecord::GetLockPrimaryInputMethodToMouse() const {
    return bLockPrimaryInputMethodToMouse;
}

bool UFortClientSettingsRecord::GetLocalNotificationsEnabled() const {
    return bLocalNotificationsEnabled;
}

ELicensedAudioTreatment UFortClientSettingsRecord::GetLicensedAudioTreatmentInternal() const {
    return ELicensedAudioTreatment::None;
}

ELicensedAudioTreatment UFortClientSettingsRecord::GetLicensedAudioTreatment(bool bIgnoreGameStreamingCheck) const {
    return ELicensedAudioTreatment::None;
}

bool UFortClientSettingsRecord::GetLargeTeamReplayRecordingEnabled() const {
    return bLargeTeamReplayRecordingEnabled;
}

bool UFortClientSettingsRecord::GetInvertedYawForMotion() const {
    return bInvertedYawForMotion;
}

bool UFortClientSettingsRecord::GetInvertedYaw() const {
    return false;
}

bool UFortClientSettingsRecord::GetInvertedPitchForMotion() const {
    return bInvertedPitchForMotion;
}

bool UFortClientSettingsRecord::GetInvertedPitchForAircraftSecondary() const {
    return bInvertedPitchForAircraftSecondary;
}

bool UFortClientSettingsRecord::GetInvertedPitchForAircraftPrimary() const {
    return bInvertedPitchForAircraftPrimary;
}

bool UFortClientSettingsRecord::GetInvertedPitch() const {
    return false;
}

bool UFortClientSettingsRecord::GetIgnoreGamepadInput() const {
    return bIgnoreGamepadInput;
}

float UFortClientSettingsRecord::GetHUDScaleRaw() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetHUDScaleMultiplier() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetHUDScale() const {
    return 0.0f;
}

bool UFortClientSettingsRecord::GetHousepartyCastingEnabled() const {
    return false;
}

bool UFortClientSettingsRecord::GetHighResTexturesReminderEnabled() const {
    return false;
}

bool UFortClientSettingsRecord::GetHideOtherPlayerNames() const {
    return bHideOtherPlayerNames;
}

int32 UFortClientSettingsRecord::GetHiddenMatchmakingDelayMax() const {
    return 0;
}

bool UFortClientSettingsRecord::GetHasAttendedEvent(const FString& Event) const {
    return false;
}

float UFortClientSettingsRecord::GetGyroLookSensitivitySetting() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetGamepadTargetingMultiplier() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetGamepadScopedMultiplier() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetGamepadMoveStickDeadZone() const {
    return GamepadMoveStickDeadZone;
}

float UFortClientSettingsRecord::GetGamepadLookStickDeadZone() const {
    return GamepadLookStickDeadZone;
}

float UFortClientSettingsRecord::GetGamepadLookSensitivityY() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetGamepadLookSensitivityX() const {
    return 0.0f;
}

float UFortClientSettingsRecord::GetGamepadEditModeMultiplier() const {
    return GamepadEditModeMultiplier;
}

float UFortClientSettingsRecord::GetGamepadBuildingMultiplier() const {
    return GamepadBuildingMultiplier;
}

bool UFortClientSettingsRecord::GetForceFeedbackEnabled() const {
    return false;
}

bool UFortClientSettingsRecord::GetFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena() const {
    return false;
}

bool UFortClientSettingsRecord::GetFocusOnFirstBuildingPieceWhenQuickbarSwapped() const {
    return false;
}

bool UFortClientSettingsRecord::GetEnableTryBuildOnFocus() const {
    return bEnableTryBuildOnFocus;
}

bool UFortClientSettingsRecord::GetEnableRudderControl() const {
    return bEnableRudderControl;
}

bool UFortClientSettingsRecord::GetEnablePartyVoiceChannel() const {
    return bEnablePartyVoiceChannel;
}

bool UFortClientSettingsRecord::GetEnableGameVoiceChannel() const {
    return bEnableGameVoiceChannel;
}

bool UFortClientSettingsRecord::GetEditConfirmOnReleaseEnabled() const {
    return bEditConfirmOnReleaseEnabled;
}

float UFortClientSettingsRecord::GetEditButtonHoldTime() const {
    return EditButtonHoldTime;
}

bool UFortClientSettingsRecord::GetDisablePreEditsWhenPlacingBuilding() const {
    return bDisablePreEditsWhenPlacingBuilding;
}

float UFortClientSettingsRecord::GetDialogueVolume() const {
    return 0.0f;
}

bool UFortClientSettingsRecord::GetDeviceFeedbackBlockedWithAttachedController() const {
    return bDeviceFeedbackBlockedWithAttachedController;
}

ECrossplayPreference UFortClientSettingsRecord::GetCrossplayPreference() const {
    return ECrossplayPreference::NoSelection;
}

bool UFortClientSettingsRecord::GetCreativeTurboDelete() const {
    return bCreativeTurboDelete;
}

bool UFortClientSettingsRecord::GetCreativeModeReplayRecordingEnabled() const {
    return bCreativeModeReplayRecordingEnabled;
}

bool UFortClientSettingsRecord::GetContextTutorialEnabled() const {
    return bContextTutorialEnabled;
}

bool UFortClientSettingsRecord::GetConsoleFPSUnlocked() const {
    return false;
}

int32 UFortClientSettingsRecord::GetColorBlindStrength() const {
    return 0;
}

EColorBlindMode UFortClientSettingsRecord::GetColorBlindMode() const {
    return EColorBlindMode::Off;
}

float UFortClientSettingsRecord::GetCinematicsVolume() const {
    return CinematicsVolume;
}

float UFortClientSettingsRecord::GetChatVolume() const {
    return ChatVolume;
}

bool UFortClientSettingsRecord::GetChatDisabledForPlatform() const {
    return false;
}

bool UFortClientSettingsRecord::GetBuildingPossessionShown() const {
    return bBuildingPossessionShown;
}

bool UFortClientSettingsRecord::GetAutoSortConsumablesToRight() const {
    return bAutoSortConsumablesToRight;
}

bool UFortClientSettingsRecord::GetAutoPickupWeaponsConsolePC() const {
    return bAutoPickupWeaponsConsolePC;
}

bool UFortClientSettingsRecord::GetAutoPickupWeapons() const {
    return bAutoPickupWeapons;
}

bool UFortClientSettingsRecord::GetAutoOpenDoors() const {
    return false;
}

EFortAutoMulchMode UFortClientSettingsRecord::GetAutoMulchMode(EFortAutoMulchCategory Category) const {
    return EFortAutoMulchMode::Off;
}

bool UFortClientSettingsRecord::GetAutoJoinGameVoiceChannel() const {
    return false;
}

bool UFortClientSettingsRecord::GetAutoHideBuildingMaterials() const {
    return bAutoHideBuildingMaterials;
}

bool UFortClientSettingsRecord::GetAutoEquipBetterItems() const {
    return bAutoEquipBetterItems;
}

bool UFortClientSettingsRecord::GetAutoChangeMaterial() const {
    return false;
}

bool UFortClientSettingsRecord::GetAttendingSocialEvent(int32 EventId) const {
    return false;
}

bool UFortClientSettingsRecord::GetAnonymousModeEnabled() const {
    return false;
}

bool UFortClientSettingsRecord::GetAnonymousCharacterModeEnabled() const {
    return false;
}

bool UFortClientSettingsRecord::GetAllowSidekickFeature1() const {
    return bAllowSidekickFeature1;
}

bool UFortClientSettingsRecord::GetAllowFriendSubscriptionNudges() const {
    return bAllowFriendSubscriptionNudges;
}

EFortAllowBackgroundAudioSetting UFortClientSettingsRecord::GetAllowAudioInBackgroundSetting() const {
    return EFortAllowBackgroundAudioSetting::Off;
}

bool UFortClientSettingsRecord::GetAimAssistEnabled() const {
    return false;
}

void UFortClientSettingsRecord::ForceToggleHousepartyCastingEnabled() {
}


