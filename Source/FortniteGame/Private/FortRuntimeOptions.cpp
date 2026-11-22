#include "FortRuntimeOptions.h"

UFortRuntimeOptions::UFortRuntimeOptions() {
    this->CreativeBetaPermissions.AddDefaulted(78);
    this->bEnableItemDefinitionWhiteListing = true;
    this->bEnableItemDefinitionWhiteListingForTransientPickups = true;
    this->bAlwaysReadyUpAllLocalPlayersForMatchmaking = true;
    this->IslandResources.AddDefaulted(3);
    this->CreativeIslandDescriptionTagsMaxQty = 4;
    this->CreativeIslandDescriptionTagsWhitelist.AddDefaulted(113);
    this->ExperimentalCohortPercent.AddDefaulted(1);
    this->YoutubeVideoPrefix = TEXT("https://i.ytimg.com/vi/");
    this->YoutubeVideoSuffix = TEXT("/sddefault.jpg");
    this->bEnableSpectatorUpdates = true;
    this->bIsTournamentMode = false;
    this->bIsOutOfSeasonMode = false;
    this->bForceBRMode = false;
    this->bAllowBPTokenRefund = true;
    this->bEnableSpeculativeCreativeMMTeamSizeFix = true;
    this->bUseTournamentAnonymousOverrideEnabled = true;
    this->bForceDisallowAnonymousMode = false;
    this->bEnableYoutubeLinks = false;
    this->bEnableGeneratedScreenshotForPortalPreview = true;
    this->bAllowLoadoutSwitchingInLobby = true;
    this->IngameMatchmakingDelaySeconds = 5;
    this->NumSavedLoadouts = 101;
    this->TournamentPlaylistName = TEXT("Playlist_DefaultSolo");
    this->TournamentPlaylistPriorityBase = 50;
    this->TournamentModeQueueInterval = 5.00f;
    this->MinimumAccountLevelForTournamentPlay = 30;
    this->bEnableManualBroadcasterStart = false;
    this->bForcePRM = false;
    this->bCreativeManualBroadcasterStart = false;
    this->bCreativeEnableTimerForPhoneToolEnforcement = true;
    this->bAutoloadRestrictedPlots = true;
    this->bDisableMyIslandDescriptionPanel = false;
    this->bEnableAllRemoteClientInfos = true;
    this->bEnableBuildPreviewForBroadcast = true;
    this->bEnableRemoteAimSnapshotManagerForBroadcast = false;
    this->EsportsAnalyticsHeartbeatRate = 5.00f;
    this->bUseBroadcastPostProcessing = true;
    this->bUseBroadcastKillFeed = true;
    this->bUseServerReplayActionFeed = false;
    this->bReplayGoToTimeEnabled = true;
    this->bBroadcastPipModeToggle = false;
    this->bShowBroadcastPlayerEventScoreWidget = true;
    this->bUseOutsideTopThreeSpectatorLeaderboard = true;
    this->bReplayPauseZeroDeltas = true;
    this->CurrentSocialImportVersion = 1;
    this->PawnDeathScreenDelay = 0.50f;
    this->CurrentVKImportVersion = 1;
    this->bEnableMassFriendImport = false;
    this->bEnableSocialTab = true;
    this->bAllowSocialPresenceUpdates = true;
    this->bEnableToastSocialWidget = true;
    this->bEnableINICachedSocialStatus = true;
    this->MaxINICachedSocialStatuses = 20;
    this->MinSecondsBetweenINICachedSocialStatuses = 120.00f;
    this->NumDaysBeforeFailedImportReattempt = 30;
    this->bEnableSocialBanModal = true;
    this->bEnableDedicatedServerSocialBanVoiceQuery = false;
    this->bEnableDedicatedServerSocialBanVoiceEnforcement = false;
    this->bDisplayLastOnlineTime = true;
    this->bDisplayLastInteraction = true;
    this->bEnableStartupSocialImport = true;
    this->bEnableStartupErebusFriendImport = true;
    this->bEnableVKImport = true;
    this->bEnableSteamImport = true;
    this->SocialImportURI = TEXT("social/friends/add?source={Platform}");
    this->DaysBetweenSocialImportPrompts = 7;
    this->DaysBetweenVKImportPrompt = 7;
    this->FriendImportCaptionSelection = -1;
    this->bEnableSplitWalletTextNotice = false;
    this->bShowAthenaStoreToast = true;
    this->bShowAthenaStoreToastForRolloverAlone = false;
    this->bAllow3DInspectOfRMTItems = true;
    this->bAltUpdateFlow = true;
    this->bShowRMTDescriptionPopup = false;
    this->bAllowJuniorEndingMovie = true;
    this->AthenaStarterGameMode.AddDefaulted(1);
    this->AthenaStarterFill = true;
    this->PartyRichPresenceUpdateTime = 3.00f;
    this->PartySuggestionUpdateTimer = 1.00f;
    this->MaxPartySuggestionsToConsider = 200;
    this->bAllowLFG = false;
    this->bAllowPartyPresenceUpdates = true;
    this->bAllowGameplayPresenceUpdates = true;
    this->bEnablePlaylistNameInRichPresence = true;
    this->bAllowDiscordFrictionlessJoin = true;
    this->bEnableInteractiveConsumables = true;
    this->bEnableContextHelpMenu = false;
    this->bShowAthenaItemShop = true;
    this->bEnableShowdown = true;
    this->bEnableTournamentMatchCaps = true;
    this->bUsePlayingEventIds = true;
    this->bRetryCMSLoads = true;
    this->RefreshScoreDelay = 2.00f;
    this->bAlwaysForceTournamentLobbyPanelRefresh = false;
    this->bEnableEventLeaderboards = true;
    this->NumCachedLeaderboardPages = 100;
    this->MaxPagesPerLeaderboard = 100;
    this->EventLeaderboardLiveRefreshTimeSeconds = 60;
    this->EventLeaderboardLivePostEventRefreshWindowMinutes = 30;
    this->bGetLiveSessionsFromLeaderboards = true;
    this->bUseServerTournamentPlacementNotifications = true;
    this->MaximumEventLengthHoursForCallout = 10;
    this->bEnableHypeLeaderboards = false;
    this->HypeLeaderboardEventId = TEXT("persistent");
    this->HypeLeaderboardEventWindowId = TEXT("Hype_S11");
    this->HypeLeaderboardRefreshTimeSeconds = 60;
    this->bHypeLeaderboardIncludeFriendsTab = false;
    this->CreativePlaylistName = TEXT("Playlist_PlaygroundV2");
    this->BattleLabPlaylistName = TEXT("Playlist_BattleLab");
    this->PlaygroundsPlaylistName = TEXT("Playlist_Creative_PlayOnly");
    this->bEnableEventScoreClamping = true;
    this->CreativeDisabledTabIndex = -1;
    this->bAllowIslandExporting = true;
    this->bAllowCreativeModeratorMode = true;
    this->bIslandExportingEnabledMCPOverride = false;
    this->bEnableCreativeServerImportFriendsOption = false;
    this->MaxPlayersInCreativeServer = 16;
    this->MaxPlayersInCreativeWhitelist = 20;
    this->bShowSupportACreatorOnIslandLinkScreen = true;
    this->bHideServersWithZeroPlayers = false;
    this->bEnableIslandCodeEntryOnPlayerPortal = false;
    this->bEnableIslandCodeEntryOnCuratedPortal = true;
    this->bEnableIslandCodeEntryInFrontend = false;
    this->RefreshFavoriteIslandsWaitTime = 10.00f;
    this->IslandCodeLength = 14;
    this->bApplyCodeFormatting = true;
    this->bAdvertiseBattleLabOwnerInSession = false;
    this->bEnableThermometerUIForBattleLab = false;
    this->bEnableSpatialThermometerForBattleLab = false;
    this->bEnableHeatmapUIDisplayForCreative = false;
    this->bEnableHeatmapUIDisplayForBattleLab = false;
    this->bUseHeatmapHighPrecison = true;
    this->bEnableBudgetTrackerSpatialTest = true;
    this->bEnableSpatialThermometerForCreative = false;
    this->bEnableSpatialSettingsForCreative = false;
    this->bIsMatchmakingEnabledForPlayers = true;
    this->CreativeHeatmapThermometerCellSize = 4096.00f;
    this->bEnableThermomterCostPreviwer = true;
    this->bEnableJoinInProgress = true;
    this->bEnableSpectateAPartyMember = true;
    this->bEnableJoinAndSpectate = true;
    this->bEnableRequestToJoin = true;
    this->MaxNumAlivePlayersForSpectateAPartyMember = 90;
    this->MaxNumPartyMemberSpectatorsPerMatch = 10;
    this->bEnableJoinInProgressInMatchmakingWidget = true;
    this->bAnyPartyMemberAllowedToCancelMatchmakingV2 = false;
    this->bEnableLockerSearch = true;
    this->bEnableLockerDirtySearch = false;
    this->bEnableBattlePass = true;
    this->bEnableBattlePassFAQ = true;
    this->bShowBattlePassBangAfterPurchase = true;
    this->bShowBattlePassBangEveryLevel = true;
    this->bShowBattlePassBangs = true;
    this->bSkipBattlePassPurchaseTextScreen = true;
    this->bBattlePassPurchaseSound = true;
    this->bBattlePassPurchaseDialog = true;
    this->bBattlePassFTUEFix = true;
    this->bBattlePassVideoDelay = true;
    this->bEnableAthenaFavoriting = true;
    this->bShowAthenaDailyQuests = true;
    this->bShowAthenaDailyQuestsWithAllChallenges = true;
    this->bEnableAthenaCustomPreviewActionForCosmetics = true;
    this->bEnableAthenaItemRandomization = false;
    this->bEnableProfileStatTracking = false;
    this->bEnableProfileStatUI = false;
    this->bEnableTrickUI = true;
    this->bEnableMultiplayerTricks = true;
    this->bShowAthenaChallengesTabWhenOutOfSeason = false;
    this->bEnableInGameChallengeTree = true;
    this->bCreateEpicAccountPinGrantDisabled = true;
    this->bLoginEpicWeb = false;
    this->bLoginXBLDisabled = false;
    this->bLoginPSNDisabled = false;
    this->bLoginErebusDisabled = false;
    this->bSkipInternetCheck = false;
    this->bEnableClientSettingsSaveToCloud = true;
    this->bEnableClientSettingsSaveToDisk = true;
    this->bEnableClientSettingsRestoreInputPresets = true;
    this->bDedServerEventServiceDownloadTryCount = 5;
    this->TournamentRefreshPayoutMaxRateSeconds = 10;
    this->TournamentRefreshEventsMaxRateSeconds = 10;
    this->TournamentRefreshPlayerMaxRateSeconds = 10;
    this->TournamentHUDPointCounterDelay = 1.50f;
    this->MaxNumDisplayNamesOnLiveGameList = 2;
    this->LiveGameListInitialLimit = 15;
    this->LiveGameListQueryIncreaseAmount = 15;
    this->bEnableLiveGamesScreen = true;
    this->bLiveGameTimeDurationVisible = false;
    this->bEnableFlagSelection = true;
    this->DefaultFlagRegionId = TEXT("fortnite");
    this->MixedNationTeamFlagRegionId = TEXT("global");
    this->FlagChangeCooldownDays = 30;
    this->bEnableEventServicePayouts = true;
    this->bLiveGamesClientAnalyticsEnabled = true;
    this->MinimumWaitTimeToRequestNewShowdownScoreForWindow = 3600.00f;
    this->EventServicePayoutRefreshRateSeconds = 1200;
    this->EventServicePayoutRefreshSpreadSeconds = 2700;
    this->BundleLoaderWidgetTimerInterval = 0.25f;
    this->SecondsShowStartingMatchMessageForScheduledMMEvents = 30;
    this->bEnableMatchAbandonProcess = true;
    this->MatchAbandonTimeout = 15.00f;
    this->bEnableMultidivisionTournamentEventIdQuorum = true;
    this->bUseAircraftStartTimeForTimeAliveTournamentStat = true;
    this->CloudSaveIntervalConfig = 60.00f;
    this->bSaveToCloudOnMapLoad = false;
    this->bSaveToCloudOnSuspend = true;
    this->bSaveToCloudOnDeactivate = true;
    this->bSaveToCloudOnTerminate = true;
    this->bSaveToCloudOnExit = true;
    this->bSaveToCloudOnLogout = true;
    this->GiftNotificationRefreshTimer = 300.00f;
    this->bEnableUndoPurchase = true;
    this->bMoveUndoToBottomBar = true;
    this->bShowStoreBanner = false;
    this->InGameStoreUpdateChance = 0.50f;
    this->bEnableReplayBrowser = true;
    this->bAllowAllReplays = false;
    this->bEnableReplayRecording = true;
    this->bEnableLargeTeamReplayRecording = true;
    this->bEnableCreativeModeReplayRecording = true;
    this->bEnablePlaygroundModeReplayRecording = true;
    this->bEnableSplitscreenReplayRecording = false;
    this->bStableReplayPlayback = true;
    this->bEnableHearingAccessibility = true;
    this->bDisableSpatializationInsteadOfMutingWhenHearingAccessibilityEnabled = true;
    this->bAllowVisualizingSoundsWithStereoAudio = false;
    this->bDisableGiftXMPPMessageSend = false;
    this->bDisableGifting = false;
    this->bEnableGiftEligibilityCheck = true;
    this->bImmediateClaimOfEmote = true;
    this->bForceRestrictChat = false;
    this->bLimitGiftingToEligiblePlatforms = false;
    this->bCanGiftYourself = false;
    this->GiftLimitAmount = 5;
    this->bBattlePassGiftingEmergencyDisable = false;
    this->bEnableBattlePassGiftingButton = true;
    this->bEnableBattlePassGiftingButtonTokenOnly = true;
    this->bShowBPGiftBoxPopup = true;
    this->EndBattleRoyalUpdateDelay = 2.00f;
    this->LightswitchDownLoginDelay = 60.00f;
    this->bShowStatusButtonOnWaitingRoomScreen = false;
    this->bInvertMotionOnUnattachedSwitchControllers = true;
    this->bDisableTouchLookVelocityScaling = false;
    this->bDisablePurchaseHistoryScreen = false;
    this->bEnableRedeemOfflinePurchasesToasts = true;
    this->bAllowProcessedPayoutsToRefreshProfile = true;
    this->TouchAimAssistStrengthScalar = 1.00f;
    this->bDisableTouchAimAssistAutoTracking = false;
    this->bProcessGamepadInputOnMobile = true;
    this->bMobileForceGamepadHUDWhenAttached = false;
    this->bDisableLegacyControls = true;
    this->bFixAimAssistDeadzoneExploit = true;
    this->CrucibleWhitelistOverride = ECrucibleWhitelistOverride::ForceOn;
    this->bDisableCrucibleStatUpload = false;
    this->bDisableCrucibleStatDownload = false;
    this->bDisableCrucibleGlobalLeaderboards = false;
    this->bDisableCrucibleFriendLeaderboards = false;
    this->bDisableCrucibleAnalyticsEvents = false;
    this->bDisableCrucibleDestroyDeadBots = false;
    this->bDisableCrucibleForcedGC = false;
    this->bDisableCrucibleLeaderboardFilterText = false;
    this->bDisableCrucibleLeaderboardSwitching = false;
    this->bCrucibleLockToPlatform = false;
    this->bCrucibleSendStatsEndOfSession = false;
    this->bCrucibleSendStatsEndOfSessionOnShutdownEvent = true;
    this->CrucibleMinValidStatScoreMilliseconds = 2000;
    this->CrucibleLeaderboardFriendQueryMaxSize = 50;
    this->bCrucibleLeaderboardEnableDisplayNameIcons = false;
    this->bEnableFortLeaderboardHelperDisplayNonPlatformNames = true;
    this->bEnableFortLeaderboardHelperConsolePlatformNameSearch = true;
    this->bEnableFortLeaderboardHelperConsoleDisplayNameFallback = true;
    this->bDisableCollectionStatsUpload = false;
    this->bDisableCollectionStatsDownload = false;
    this->CollectionStatsFriendQueryMaxSize = 50;
    this->bUseNativeQuickbar = true;
    this->bSoundIndicatorsAlwaysEnabled = false;
    this->bSoundIndicatorsEnabledForTeammates = false;
    this->bSoundIndicatorsPooled = true;
    this->SoundIndicatorMaxNum = 30;
    this->TencentDefaultBookStatSeason = 14;
    this->bEquipFirstWeaponOnMobile = true;
    this->bClearLastFireOnAbilityFailed = true;
    this->bUsePrototypeSubGameLoadingScreen = true;
    this->bForcePrototypeLoadingScreenScaling = true;
    this->ShowEliminationDistanceOver = 50.00f;
    this->FadeOutTeamIndicatorsAfter = 27500.00f;
    this->FadeOutNPCEnemyIndicatorsAfter = 10000.00f;
    this->FadeOutEnemyIndicatorsAfter = 27500.00f;
    this->FadeOutWorldItemIndicatorsAfter = 10000.00f;
    this->FadeOutHardCoreBeaconIndicatorsAfter = 27500.00f;
    this->MapIndicatorTouchClearDistance = 75.00f;
    this->AthenaMapZoomMax = 5.00f;
    this->BacchusMapIndicatorSizeMultiplier = 2.00f;
    this->AthenaMapPanSpeedMultiplier = 2.50f;
    this->AthenaMapZoomSpeedMultiplier = 1.00f;
    this->bAthenaMapMapIconsFlowEnabled = true;
    this->WaitTimeBeforeShowingNewModeViolator = 3.00f;
    this->bOnlyShareURLWithNoMessage = true;
    this->bExcludeURLInShareMessage = true;
    this->bShowCreateAccountOnRedirect = false;
    this->bEnableContextTutorial = true;
    this->bDebugForcePlayerSurveys = true;
    this->bFeedbackTextShown = false;
    this->bEnableBadMatchPopup = false;
    this->BadMatchIncidentThreshold = 10;
    this->BadConnectionUpdateTime = 1.00f;
    this->BadMatchPopupRecallInterval = 10;
    this->AthenaCodeOfConductURL = TEXT("https://www.epicgames.com/fortnite/news/fortnite-battle-royale-code-of-conduct");
    this->KairosCommunityRulesURL = TEXT("https://www.epicgames.com/fortnite/news/fortnite-battle-royale-code-of-conduct");
    this->BacchusFriendCodeShareURL = TEXT("https://fortnite.com/mobile?code=");
    this->CreateAccountUrl = TEXT("https://fortnite.com/mobile/create-account?mode=iosgame");
    this->GooglePlayRatingURL = TEXT("https://play.google.com/store/apps/details?id=com.epicgames.fortnite");
    this->LinkAccountURL = TEXT("https://www.epicgames.com/account/connected");
    this->AccountMergeMoreInfoURL = TEXT("https://fortnitehelp.epicgames.com");
    this->bEnableFactionTechScreen = true;
    this->bRequireFactionChoiceOnInfiltrationPlay = true;
    this->TotalPlayerTechLevelsToShow = 45;
    this->SupportURL = TEXT("https://fortnitehelp.epicgames.com");
    this->CheckStatusURL = TEXT("https://status.epicgames.com");
    this->iOSAppStoreURL = TEXT("https://itunes.apple.com/us/app/fortnite/id1261357853?mt=8");
    this->TurnOnMfaURL = TEXT("http://epicgames.com/2FA");
    this->bAllowCodeRedemptionInSubgameSelect = false;
    this->bEnableAutomaticMOTD = true;
    this->bShowMOTDInLobby = true;
    this->bMOTDSameNewsForCreative = false;
    this->bSkipSubgameSelect = false;
    this->BRUpdatesURLMode = ENewsExternalURLMode::PatchNotes;
    this->STWUpdatesURLMode = ENewsExternalURLMode::UpdateNotes;
    this->PrivacyPolicyURL = TEXT("https://www.epicgames.com/privacypolicy");
    this->FanContentPolicyURL = TEXT("https://www.epicgames.com/fan-art-policy");
    this->TermsOfServiceURL = TEXT("https://www.epicgames.com/tos");
    this->GuardianChallengeLengthDays = 30;
    this->bAgeGateFlowEnabled = true;
    this->bEnableContentControls = true;
    this->ContentControlsMoreInfoURL = TEXT("https://epicgames.com/fortnite/parental-controls");
    this->ContentControlsForgotPinURL = TEXT("https://www.epicgames.com/help/epic-accounts-c74/parental-controls-c111/how-do-i-reset-my-pin-for-parental-controls-on-my-epic-games-account-a3264");
    this->ContentControlsVerifyEmailURL = TEXT("https://www.epicgames.com/account/personal");
    this->bEnableContentControlsPlaytimeReporting = true;
    this->bEnableContentControlsPurchaseReporting = false;
    this->bContentControlsViewUGCEnabled = false;
    this->MaxNumItemsInCreativeChests = 15;
    this->MaxStackSizeForCreativeResources = 999999;
    this->MaxStreamerMatchmakingDelay = 60;
    this->bEnableHiddenMatchmakingDelay = true;
    this->PSALoadingScreenPercentChance = 2;
    this->StwDownloadLauncherOption = TEXT("%26install%3Dchunk11");
    this->bDisableAllKnobs = false;
    this->bDisableAllGameplayMessages = false;
    this->bDisableMatchmakingKnobs = false;
    this->bDisableMinigameKnobs = false;
    this->bDisableGameOptionKnobs = false;
    this->bDisableAffiliateFeature = false;
    this->bUseHotfixedAffiliateNamesArray = false;
    this->bEnablePrerollLlamas = true;
    this->bEnableSubregionNetworkAccelerators = true;
    this->AdvertisedNetworkAcceleratedSubregions.AddDefaulted(2);
    this->bShowAccountItemWarningForVaultThreshold = true;
    this->DaysBetweenAccountItemWarnings = 30;
    this->VaultLimitThresholdForAccountItemWarning = 1.10f;
    this->bShowAccountItemWarningForItemCount = true;
    this->AlwaysWarnAccountItemCount = 10000;
    this->DisabledTabsForOutOfSeason.AddDefaulted(2);
    this->TournamentDisabledFrontendNavigationTabs.AddDefaulted(10);
    this->DisabledMatchmakingKnobs.AddDefaulted(1);
    this->HiddenMatchmakingKnobs.AddDefaulted(1);
    this->NumGameplayMessageChannels = 250;
    this->bShowMOTDNews = true;
    this->SoloTournamentScoreThresholds.AddDefaulted(4);
    this->DuoTournamentScoreThresholds.AddDefaulted(4);
    this->SquadsTournamentScoreThresholds.AddDefaulted(4);
    this->PickingInteractDistance = 360.00f;
    this->PickingHighlightMovementUpdateDist = 30.00f;
    this->PickingHighlightUpdateTime = 0.20f;
    this->PickingTime = 0.10f;
    this->AutoPickingInteractDistanceFactor = 1.25f;
    this->AutoOpenDoorInputMagnitude = 0.50f;
    this->AutoOpenDoorTraceDistance = 200.00f;
    this->bAutofireEnabled = false;
    this->bShowXPWidgets = true;
    this->bShowAccoladesListWidget = true;
    this->bEnableInGameMatchmaking = true;
    this->bUseNewFlowIngameMatchmaking = true;
    this->bDisableAccoladesButton = true;
    this->bToggleIGMAnalytics = true;
    this->bAllowPreserveSquad = false;
    this->bAllowPreserveSquadMemberVoting = false;
    this->bKeepPlayingTogether = false;
    this->bAutofireUsesComponent = true;
    this->bAutofireUsesAutoaimTarget = true;
    this->bHoldToFireOnAutofireTarget = false;
    this->DefaultAutofireRange = 5000.00f;
    this->AutofireExtraTrackingRange = 1000.00f;
    this->bServerNetDriverAnalytics = true;
    this->bClientNetDriverAnalytics = false;
    this->bDisableReplicationGraph = false;
    this->BRServerMaxTickRate = 30.00f;
    this->DoubleTapOnEndTouchTime = 0.25f;
    this->DoubleTapOnStartTouchTime = 0.15f;
    this->DoubleTapDistance = 100.00f;
    this->SingleTapDistance = 10.00f;
    this->TouchMoveStickRadius = 50.00f;
    this->TouchMoveStickRadiusTargeting = 100.00f;
    this->TouchMoveStickRadiusScoped = 150.00f;
    this->TouchMoveStickRadiusDriving = 150.00f;
    this->AutorunLockZoneOffset = 200.00f;
    this->AutorunLockZoneDelay = 0.10f;
    this->MoveOriginResetTime = 1.00f;
    this->MoveOriginResetDistance = 50.00f;
    this->MoveOriginFollowDistance = 30.00f;
    this->bDisableTouchLookInertia = false;
    this->RotateInertiaMultiplier = 1.00f;
    this->RotateInertiaMinTime = 0.15f;
    this->RotateInertiaMinLength = 10.00f;
    this->RotateInertiaMinMagnitude = 2.00f;
    this->RotateInertiaNumAveragedTouches = 3;
    this->bTouchQuickbarTapToLockEnabled = false;
    this->bTouchInteractInUIAvailable = true;
    this->bTouchInteractInUIForced = false;
    this->bEnableHUDLayoutTool = true;
    this->bEnableHUDLayoutCloudSave = true;
    this->bEnableHUDLayoutToolPanZoom = true;
    this->bEnableMobileHUDV2 = true;
    this->bEnableHUDLayoutToolV2 = true;
    this->bEnableHUDLayoutToolV2_GridSnap = true;
    this->bEnableGFNSettingEditCondition = true;
    this->AthenaExternalRichPresenceDelayTimeSeconds = 20.00f;
    this->bEnableExternalPresenceAthenaPlayersRemain = true;
    this->MinimumTimeBetweenConsolePresenceUpdates = 10.00f;
    this->MinimumTimeBetweenMCPPresenceUpdates = 10.00f;
    this->TimeBetweenStorePatchCheckRequestsSeconds = 60;
    this->bInviteUIDisabled = true;
    this->bEnableInGameMipsAnalyticsReporting = false;
    this->SecondsBetweenTextureStatsGathering = 10.00f;
    this->bEnableMipsCapExperiment = false;
    this->CurrentMipsCapExperimentVersion = 1;
    this->bEnableDownloadAnalyticsReporting = false;
    this->bEnableDownloadHeartbeat = false;
    this->DownloadHeartbeatIntervalInSeconds = 30.00f;
    this->bEnableFriendsListButton = true;
    this->bForceDisableCrossplatformSquadFill = true;
    this->bRequireCrossplayOptIn = false;
    this->bUseAccountCrossplayPermissions = false;
    this->bSingleCrossplayOptInPrompt = false;
    this->bImmediatelyDisplayCrossplayOptIn_STW = true;
    this->bImmediatelyDisplayCrossplayOptIn_BR = false;
    this->bCrossplayOptInByDefault = true;
    this->bShowIconForSamePlatformPlayers = false;
    this->bObscuredPlatformIcons = true;
    this->bEnableChatWidget = true;
    this->bShowVoiceChatSettings = true;
    this->bShowMultipleVoiceChatSettings = false;
    this->bUseClientSettingsForControllerImage = true;
    this->bPartyInProgress = true;
    this->bShouldAthenaQueryRecentPlayers = true;
    this->bEnableRecentPlayerList = true;
    this->bEnableSuggestedFriendList = true;
    this->bEnableBlockedList = true;
    this->bEnableFriendListInGame = true;
    this->bPushJIPInfoToPlatformPresence = true;
    this->bEnableStWInZonePrivacyChange = false;
    this->bEnableSitoutOption = true;
    this->bEnableSitoutOption_STW = true;
    this->bEnableSocialPanelLeaveParty = true;
    this->bEnableMainMenuLeaveParty = true;
    this->bEnableINICachedRecentPlayers = true;
    this->MaxINICachedRecentPlayers = 10;
    this->MinUSSNameLength = 3;
    this->bEnableNickname = true;
    this->bAllowNicknameEmoji = true;
    this->bNicknameInFront = true;
    this->bShowAccountBoosts = true;
    this->bShowCustomerSupport = true;
    this->bEnableChannelChangePopup = true;
    this->bEnableVoiceSpeakerWidget = true;
    this->bEnableSpeakerWidgetZonePerfMode = true;
    this->bShowVoiceIndicatorsWhileLoading = false;
    this->bEnableVoiceChannelSelectionUI = true;
    this->bEnableGlobalChat = true;
    this->bEnableAllTabInChat = false;
    this->bEnableEULA = true;
    this->bEnableEndOfZoneCinematic = true;
    this->bEnableOnboardingCinematics = true;
    this->bShowFounderBannerIcons = true;
    this->bShowCurrentRegionInLobby = true;
    this->bEnableFoundersDailyRewards = true;
    this->bEnableTwitchIntegration = false;
    this->bEnableMatchmakingRegionSetting = true;
    this->bEnableReadyupButtonWhileSittingout = true;
    this->bEnableEulaRequiredTournaments = true;
    this->bEnableMFARequiredTournaments = true;
    this->bAllTournamentsRequireMFA = false;
    this->bSpectatorBroadcasterSkipMfaEulaCheck = true;
    this->bEnableNaviationToChat = true;
    this->bEnableLanguageSetting = true;
    this->bEnableFriendCodeSetting = true;
    this->bEnableEarlyAccessLoadingScreenBanner = false;
    this->bClientIgnoreIsTournamentCheck = false;
    this->CampaignMatchEndRetryCount = 3;
    this->StWTutorialDownloadAttempts = 30;
    this->bShopPurchaseConfirmation = false;
    this->bShopPurchaseConfirmationJapanPS4 = false;
    this->bToyMessagingEnabled = true;
    this->bAllowAccessToAllEmotesForTesting = false;
    this->bAllowAccessToStWHeroOutfitsAndBackblingForTesting = false;
    this->bEnableCosmeticItemShopInSTW = false;
    this->bRequireEmoteOwnershipInPIE = false;
    this->bEnableSTWLootDrops = true;
    this->bEnableSTWContainerItemCacheDrops = true;
    this->bEnableSTWEnemyItemCacheDrops = true;
    this->bEnableHoldToPickupUI = true;
    this->bSkipTrailerMovie = false;
    this->bAlwaysPlayTrailerMovie = false;
    this->bHideUnaffordableMtxPurchases = false;
    this->bDisableCTAInMtxStoreSelection = false;
    this->bAthenaFrontEndUsePushPopMTXStore = false;
    this->bHidePlusOnVbucksButton = false;
    this->bAllowXboxStwAccessDuringLiveStoreOutage = false;
    this->bShowReplayTrailerButton_Athena = true;
    this->bEnableAlterationModification = true;
    this->bEnableSchematicRarityUpgrade = true;
    this->bEnableMissionActivationVote = true;
    this->bEnableLtmRetrieveTheData = true;
    this->bEnableUpgradesVideos = true;
    this->bEnableExternalRichPresence = true;
    this->bShowEnableMFAModalAtStartupAthena = false;
    this->bShowEnableMFAModalAtStartupSTW = false;
    this->bEnableAIBuildingHitFX = true;
    this->LevelToStartShowingMFAModal = 10;
    this->DaysBetweenEnableMFAModalPrompts = 7;
    this->DelayGiftButtonWhenMFANotEnabledSeconds = 15.00f;
    this->LevelToAutoOpenBattlePassOnNewSeason = 0;
    this->ForceSeasonRefreshCounter = 0;
    this->ForceVideoRefreshCounter = 0;
    this->bForceBattlePassPreview = false;
    this->bCanShowSTWUpsellInBR = false;
    this->bShowLeaderboardPrivacySettings = true;
    this->bEnableServerScoreboardLog = false;
    this->bEnableAsyncScoreboardFlush = false;
    this->bEnableInputBasedMatchmaking = false;
    this->bUsingAlternateMatchmakingModel = true;
    this->bNotifyBlockedInput = true;
    this->NumberOfFramesBeforeWarnInputBlocked = 30;
    this->bDisableVideoOptions = false;
    this->bEnableBattlePassWatchVideoActionOnCell = true;
    this->bEnableBattlePassReplayCinematicAction = true;
    this->bEnableCareerReplayCinematicAction = true;
    this->RadioInputDebounceSeconds = -1.00f;
    this->RadioTuningRetryTime = -1.00f;
    this->RadioTuningRetryCount = -1;
    this->bEnableBattlePassSocialFriends = true;
    this->bEnableBattlePassSocialFriendsOfDifferentPlatforms = true;
    this->bEnableBattlePassSocialFriendsServerSide = true;
    this->bEnableSimulatedXPForBattlePassSocialFriends = true;
    this->bEnableBattlePassPreviewOnRewardScreen = true;
    this->bEnableHoldToCloseOnRewardsScreen = true;
    this->BattleStarsNeededToShowRewardPreview = 99999;
    this->ShowBattlePassTracker = 0;
    this->bDisplayBattlePassRewardsIndividually = true;
    this->bDisplayOnlyBattlePassFAQ = false;
    this->bEnableBPVideo = true;
    this->bEnableUEKGameSelect = false;
    this->bCompletelyDisableUEKGameSelect = false;
    this->bAlwaysPlayBPVideo = false;
    this->bDisableGRL = false;
    this->bShowBPPreviewVideo = false;
    this->bShowBPTrack_TimeLeft = false;
    this->bDisplayAllCharactersOnBattlePassPreviewScreen = true;
    this->bRefreshBattlePassCatalogOnSeasonDataLoaded = false;
    this->bEnableChallengeHolidayVideo = false;
    this->bEnableCareerScreenVideo = true;
    this->bEnableSpecialEventVideo = false;
    this->bEnableCNVideo = true;
    this->bEnableWinterfestPurchaseButton = false;
    this->bEnableWinterfestGiftButton = false;
    this->bForceWinterfestInfoModalButtonVisible = false;
    this->NumViewsToDisplayWinterfestInfoModalButton = 2;
    this->bCheckForPatchUpdateOnMatchmakingPlayClick = true;
    this->bCheckForPatchUpdateOnItemShopActivate = true;
    this->bDisplayPlayerReportingRoles = true;
    this->bDisplayRelevantPlayersForPlayerReporting = true;
    this->bPreventMultipleReportsOfSamePlayer = true;
    this->bAllowReportingFeaturedIslands = true;
    this->bForceGamepadPlaytest = false;
    this->bEnableNewFireModeSelection = true;
    this->bEnableHUDPresetSelection = true;
    this->bEnableAddFriendWhileSpectating = false;
    this->bEnableFriendLink = false;
    this->PlatformChatToastDisplaySeconds = 10.00f;
    this->HPMicrophoneToastDisplaySeconds = 4.00f;
    this->FriendLinkURL = TEXT("https://fortnite.com/friend/");
    this->bAllowForceTouchFire = false;
    this->VehicleSessionMinTimeUsed = 3.00f;
    this->RebootChipExpirationTime = 90.00f;
    this->RebootDirectiveDisplayTime = 7.00f;
    this->bDonutIdleGameEnabled = true;
    this->bRebootEnableInventoryDisplay = true;
    this->bUseHordeStormShield = true;
    this->HordeStormShieldStartingRadiusOverride = -1.00f;
    this->HordeStormShieldEndingRadiusOverride = -1.00f;
    this->HordeStormShieldBreatherRadiusOverride = -1.00f;
    this->bUseHordeRespawnAtLastPawnLocation = true;
    this->bAllowHordePlayerTriggeredRespawn = false;
    this->MaxQuickScopeAimAssistPulls = 2;
    this->MaxQuickScopeAimAssistPullWatchTime = 1.00f;
    this->bShouldDisablePickaxeFXFrontendPreview = false;
    this->bRegisterPawnsWithSignificanceManagerInFrontEnd = false;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnPS4 = true;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnXB1 = true;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnSwitch = true;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnPS4_STWOnly = true;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnXB1_STWOnly = true;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnSwitch_STWOnly = true;
    this->bSimpleHeistVanEntrance = true;
    this->LobbyGenericLinkButtonURL = TEXT("https://fortnite.com");
    this->bEnableLobbyGenericLinkButton = false;
    this->HighlightClipRewindTimeInSeconds = -30;
    this->bEnableAntiTaxi = true;
    this->StopFlyingParachuteCooldownTime = 0.50f;
    this->FlushLoadingScreenRefreshSeconds = 2.50f;
    this->bEnableVehicleSpawnMissionInStw = true;
    this->bEnableDownTierCraftingInStw = true;
    this->bShowBugReportsButton = true;
    this->bShowCommentReportsButton = true;
    this->bShowContentReportsButton = true;
    this->bEnableItemRefundingInStw = true;
    this->bDisableCareerStatsButton = false;
    this->bDisableCareerLeaderboardButton = false;
    this->bDisableCareerStatsPagePlatformProfileButton = false;
    this->bUsePlatformSpecificTextOnCareerPage = true;
    this->bDisableViewOtherProfilesFromCompLeaderboards = false;
    this->bShowOtherPlayerStatsOnCareerPage = true;
    this->bShowFeatsOnClient = true;
    this->bShowHardcoreModifiers = false;
    this->InputMethodThrashingLimit = 30;
    this->InputMethodThrashingWindowInSeconds = 10.00f;
    this->bEnableLogUploadForTokenHolders = true;
    this->TokenHolderLogTailSizeKb = 512.00f;
    this->bAllowPartialBackgroundAudio = true;
    this->bDuplicateRemovedPlayersOnClient = true;
    this->bIsCreativeMultiSelectEnabled = true;
    this->bEnableUserProfilePictures = false;
    this->bUseProfilePicturePresence = true;
    this->bEnableChannelsServiceLoadTesting = false;
    this->bAllowMimicingEmotes = true;
    this->bAllowMimicingEmotesInFrontend = false;
    this->bAllowAsyncTooltipLoading = true;
    this->bAllowListViewAsyncLoading = true;
    this->bEnableBackToPartyHubButton = true;
    this->bEnableMobileAvailableLootingListView = false;
    this->bEnableDisambiguateLoading = true;
    this->bEnableOptionalHighRezMips = false;
    this->NumDaysToSnoozeGooglePlayRating = 365;
    this->NumDaysAllowedToDelayGoogleRating = 3;
    this->bEnableMobileInGameAppRating = true;
    this->PreloadRevision = 0;
    this->bEnableLiveStoreTilePreviews = true;
    this->bEnableLiveStoreTilePreviews_InGame = false;
    this->bAllowedToEnableUIGlobalInvalidation = true;
    this->bEnableAutoMulchInStW = true;
    this->bAllStWMoonbeamHUD = true;
    this->MaxCharactersInTextEntry = 100;
    this->IllegalIslandTitleChars.AddDefaulted(2);
    this->bEnableCreativeUserTextSanitizationWithToxicityService = true;
    this->bEnableCreativeUserTextSanitizationWithPlatformSanitizer = true;
    this->bEnableCreativeUserTextSanitizationWithChatSanitizer = true;
    this->bUseToxicityAsCreativeMainTextSanitizer = true;
    this->bUseLegacyAsyncSanitizationLogicInCreative = false;
    this->KeepPlayingTogetherDuration = 20.00f;
    this->KeepPlayingTogetherTickFrequency = 1.00f;
    this->HotfixVersionId = 1;
    this->bCanTurboBuildOutsideBuildModeWithBuildTool = true;
    this->MaxBuildingIntoTerrainIntersectionPercentage = 0.30f;
    this->bUsingBuildingExtraPiece = true;
    this->AnalyticsBuildingWallTooLowLocations = 20;
    this->bDisableClientEngagementsAnalytics = false;
    this->AnalyticsClientEngagementsTimeoutSeconds = 15.00f;
    this->AnalyticsClientEngagementsMaxSendPerMinute = 1;
    this->AnalyticsClientEngagementsMaxSendOnCleanup = 4;
    this->bAnalyticsClientEngagementsRequireTimeToReturnFireToSend = false;
    this->AnalyticsClientEngagementsParticipationPercent = 100;
    this->PublishingEnabledForWhitelistedAccounts = true;
    this->IslandCodeLinkMnemonicExampleText = TEXT("0000-0000-0000");
    this->IslandCodeLinkURLText = TEXT("https://epicgames.com/fn/");
    this->bEnableCreativeLTMSupportCreator = true;
    this->CreativePublishCodeURLPrefix = TEXT("https://epicgames.com/fn/");
    this->bCreativeMinimapRendering = true;
    this->bCreativeMinimapCaptureLighting = true;
    this->bCreativeMapRenderingInHub = true;
    this->bCreativeMapWaitForVolumeReady = true;
    this->CuratedIslandTemplateCodes.AddDefaulted(9);
    this->bEnableIslandCheckpoints = true;
    this->bEnableIslandLoadNetSafeGuards = true;
    this->bLoadingScreenInputPreprocessorEnabled = true;
    this->AllowInputTypeFilterForAccessibility = true;
    this->AllowLockPrimaryInputMethodToMouseForAccessibility = false;
    this->bEnableLiveStream = false;
    this->bEnableLiveStreamCountdown = false;
    this->bEnableLiveStreamInMatch = false;
    this->bShowLiveStreamInMatchByDefault = false;
    this->bCaptureTeamFrontendFlag = false;
    this->VideoHolidayName = TEXT("WinterQuest2019");
    this->VideoBattlePassName = TEXT("AutoOpenUpBattlePassPreview");
    this->VideoCareerScreenName = TEXT("CareerScreen-SeasonTrailer");
    this->VideoChallengeScreenName = TEXT("Fortnitemares2019");
    this->VideoFrontEndName = TEXT("SeasonTrailer");
    this->FTUESeasonTrailerBoundary = 87.88f;
    this->VideoDurationOffsetFromTransition = 1.33f;
    this->VideoDurationOffsetFromEnd = 1.00f;
    this->bEnableGCBeforeVideoPlayback = true;
    this->EOneVideoLength = 17.00f;
    this->MediaCDNDistribution.AddDefaulted(2);
    this->MaxNumberOfMediaDecoderResources = 2;
    this->LiveStreamPiPMemoryRequired = 0;
    this->ShouldShowLiveStreamPiPInMatchCounter = 0;
    this->bEnableRiskyReelsStreaming = false;
    this->bDisableBlastURLStreamSource = false;
    this->StreamPlaylistFetchMethodOrder = 1;
    this->bHiddenButEnabledLiveStreamInMatch = false;
    this->TimedEventsJIPStartDelay = -1.00f;
    this->bEnableLoadingScreenPIP = false;
    this->bEnableSplineReticulationById = false;
    this->bUseSingleHUDUpdatePerFrame = true;
    this->MinInteractionScoreForFriendToBeConsideredClose = 8;
    this->MinIntervalBetweenInviteToPartyNotificationsInSeconds = 600;
    this->DelayBetweenStartOfPostGameAndShowDelayedNotificationsInSeconds = 8.00f;
    this->PlaylistConditionalFlags.AddDefaulted(2);
    this->bIsUserChoiceAllowedForForcedAndroidStore = true;
    this->AndroidStoreCounter = 0;
    this->bHideCharacterCustomizationNullTile = false;
    this->bEnablePlaylistRequireCrossplay = false;
    this->bRequireCrossplayOptInForFill = false;
    this->bUseConcurrentCrossplayPromptGuard = true;
    this->MaxSquadSize = 4;
    this->MaxPartySizeCampaign = 16;
    this->MaxPartySizeAthena = 16;
    this->bShouldFollowersSendSquadMatchmakingInfo = false;
    this->bAllowAthenaNavSystemForCreative = true;
    this->bEnablePlayerSurveys = true;
    this->bEnablePlayerStatsPrecache = true;
    this->bEnableStreamingReplayViewingUI = false;
    this->LiveReplayDiscoverabilityDelay = 300.00f;
    this->bSkipPlayingFortniteChecks = false;
    this->bReplayBattleMapCameraMode = true;
    this->bReplayKeepLocalClientEvents = false;
    this->bReplaySampleAthenaPawnMovement = true;
    this->ReplaySampleAthenaPawnTimeRate = 10.00f;
    this->ReplaySampleAthenaPawnSpaceRate = 1500.00f;
    this->ReplaySampleAthenaPawnUpdateTimeRate = 40.00f;
    this->bDisablePartyJoinInOutpost = true;
    this->bEnableMissedInvitesEntry = false;
    this->bOnlyShowMissedInvitesEntryIfMissedInvites = false;
    this->bEnableNotifyWhenPlaying = false;
    this->bEnableSubscriptionNudges = false;
    this->bEnableSidekick = true;
    this->bEnableSidekickFeature1 = true;
    this->bEnableSidekickFOMO = true;
    this->bEnableSidekickAvatars = false;
    this->bSidekickDisablesScreenRecord = false;
    this->bSidekickEnableExitFNButton = true;
    this->bEnableSidekickFaceAreaInvalidation = true;
    this->bSidekickDisabledByNightNight = true;
    this->bSidekickForcesSingleChannelMode = false;
    this->bEnableCampaignBatchLevelingUI = true;
    this->bAllowSimultaneousChannelConnections = true;
    this->bAllowSimultaneousChannelListening = false;
    this->bExpandNotListeningChannels = true;
    this->MaxSetFriendSubscriptionSettingsAttempts = 3;
    this->MaxQueryFriendSubscriptionSettingsAttempts = 3;
    this->NumDaysBetweenPlayingNotifications = 0;
    this->NumHoursBetweenPlayingNotifications = 0;
    this->NumMinutesBetweenPlayingNotifications = 30;
    this->bForceAutoChangeMaterialOn = true;
    this->bActiveDisplayDeviceTemperature = false;
    this->bAllowOfflineInvites = false;
    this->bEnablePlatformVoiceLeave = true;
    this->bEnablePlatformVoicePrompts = true;
    this->bEnableVoiceChatEnablePrompt = true;
    this->PlaylistGameVoiceChannelRecommendationDisplayTime = 11.00f;
    this->bEnablePlaylistGameChannelRecommendationToast = false;
    this->bEnableQuickHealing = true;
    this->bAllowDeferredPedestalPawnSpawn = true;
    this->bRunUnicornOnServer = false;
    this->bShowSamsungSensorButtonWarning = false;
    this->SamsungSensorButtonGamesPerWarning = 5;
    this->CatabaExclusiveCountryCodes.AddDefaulted(1);
    this->bEnableItemShopDynamicBackground = true;
    this->EnableCommunityVotingScreen = true;
    this->CommunityVotingTutorialVersion = 1;
    this->CommunityVotingRevealDelay = 0.50f;
    this->CommunityVotingTimerRefreshDelay = 60.00f;
    this->ScrollToWinnerTileAfterReveal = true;
    this->EnableStandaloneStorefront = true;
    this->bEnableBattlePassStorefront = true;
    this->bEnableItemPreviewInStore = false;
    this->bEnableCurrencyInspectScreenBonusText = false;
    this->bEnableCurrencyBonusBanner = false;
    this->bEnableItemShopInvalidationBox = false;
    this->ScrollToStandaloneSectionOnPopupClosed = false;
    this->ItemShopOrdering.AddDefaulted(7);
    this->bEnableItemShopSectionBangs = true;
    this->bEnableItemShopCommunityVotingSectionBang = true;
    this->ItemShopDefaultLandingPriority.AddDefaulted(4);
    this->ItemShopOverrideDisplayDataList.AddDefaulted(1);
    this->ItemShopDefaultLanding = EFortItemShopSection::Featured;
    this->ItemShopOfferSeenThreshold = 2.00f;
    this->CommunityVotingTileAnimated = false;
    this->ScrollToComTileOnEventPopupClosed = true;
    this->EnableThanksVotingPopup = true;
    this->bUseItemPresentationScreenOnItemPurchased = true;
    this->CommunityVotingThanksPopupDelay = 2.00f;
    this->bIgnoreABTestingForReloadMtx = false;
    this->ReloadMtxExclusiveCountryCodes.AddDefaulted(1);
    this->bEnableReloadMtx = false;
    this->bEnableDynamicReloadMtx = false;
    this->bEnableInGameReloadMtx = true;
    this->ReloadMtxIntroVersion = 1;
    this->bEnableCrew = true;
    this->bEnableSubscriptionInspectScreen = true;
    this->bEnableBattlePassViolatorEarnedCurrency = true;
    this->InGameCosmeticItemBangRefreshRate = 0.10f;
    this->bUseContentPatchingRestartFlow = true;
    this->bAthenaAutoPickupStackables = true;
    this->bEnableUnicornHighlightsOnClient = false;
    this->bEnableHighlightsPromptInCompeteScreen = true;
    this->bUseReturnToKairosLoadingScreen = true;
    this->bForceReturnToKairosLoadingScreen = false;
    this->bDebugForceLoginRelaunch = false;
    this->bEnableDADUpdateCheckOnRTMM = true;
    this->bShouldAllowNightNightMode = false;
    this->NightNightPluginName = TEXT("NightNightMode");
    this->bEnableFrontendMeshRockyRidgeCheck = false;
    this->FrontendMeshRockyRidgeMetadataKey = TEXT("HasDaddyTuckedUsIn");
    this->FrontendMeshRockyRidgeCanaryKey = TEXT("AreWeGettingSleepy");
    this->FrontendMeshRockyRidgeInitialIntervalSeconds = 15.00f;
    this->FrontendMeshRockyRidgeFailureMultiplier = 1.25f;
    this->FrontendMeshRockyRidgeMaxIntervalSeconds = 120.00f;
    this->FrontendMeshRockyRidgeMeshName = TEXT("Apollo_Terrain");
    this->bForceEverybodyToGoNightNight = false;
    this->bQueryKeychainBeforeGoingNightNight = true;
    this->bAllowSubgameSelectToGoNightNight = true;
    this->bAllowCampaignFrontendToGoNightNight = false;
    this->bShouldAllowForcedIntro = false;
    this->bShowMovieInGameplayIntro = true;
    this->bShowMovieInGameplayOutro = true;
    this->bSkipSubgameSelectDuringForcedIntro = true;
    this->bSkipToEndGameplayIntroOutroVideos = true;
    this->bUseAthenaArmory = false;
    this->bEnableLiveSpectateButton = false;
    this->bEnableGuidedTutorialDefensiveBuilding = false;
    this->bEnableSafeZoneEditor = true;
    this->bEnableSavedLoadouts = true;
    this->bSavedLoadoutsUseGodTile = true;
    this->bEnableSafeZoneEditorOnLogin = true;
    this->bEnableSafeZoneEditorWhenNotInApolloIntro = true;
    this->LoginFlowCMSRefreshWaitTime = 5.00f;
    this->bEnableAppResumeCMSUpdate = true;
    this->bEnableMOTDAnalytics = true;
    this->bEnableTabTransitionMOTDAnalyticsEvent = true;
    this->bAllowStoreSkipOpenAnimation = true;
    this->bAllowInGameStore = true;
    this->bPostGameStoreNoLeto = true;
    this->bPostGameStoreTriggerIncrementalGC = true;
    this->bAllowInGameLocker = true;
    this->bAllowInGameCareer = false;
    this->bAllowInGameActivityBrowser = false;
    this->bEnableGuidedTutorialDirectFlush = true;
    this->bEnableGuidedTutorialABTesting = true;
    this->bEnableHighlightPlayButtonABTesting = true;
    this->bEnableSkipGuidedTutorialABTesting = true;
    this->MaxFrontendFlowStatQueries = 30;
    this->ApolloIntroShowMovie = true;
    this->bRunDeimosSpawnTimelines = false;
    this->TeamToPlaceMeshNetPawnsOn = -1;
    this->bEnableAddFriendUserSearchDarkTraffic = false;
    this->bEnableExtendedUserSearchUI = true;
    this->bEnableRecursiveMatchAssignmentSearchForTeam = true;
    this->bEnableBackfillCheckForHighestTeamScore = true;
    this->bEnableBackfillCheckForTeamScoreDifference = false;
    this->bDisableTdmBackfilledPlayerTeleport = false;
    this->bDisableWarmupRequiredPlayerCountCheck = false;
    this->bAIDirectorTreatBotsAsPlayersForLOD = true;
    this->bEnablePhoenix = true;
    this->bBuildingPossessionShown = false;
    this->bBacchusFrontendEnabled = true;
    this->bEnableAFortPlayerPawnOnRep_InVehicleAndUFortVehicleSeatComponentOnRep_PlayerSlotsRaceConditionFix = true;
    this->bSprintingStrafeSnapEnabled = false;
    this->bExplicitSprintableInputRange = true;
    this->MinForwardForSprint = 0.24f;
    this->MinForwardForSprintSnapping = 0.00f;
    this->AccelerationStrafeMultiplierSprintOverride = 0.00f;
    this->KeyboardDiagonalSprintForwardOverride = 0.00f;
    this->KeyboardSprintInputWindUpTime = 0.00f;
    this->KeyboardMoveInputWindUpTime = 0.00f;
    this->bEnableWebAuthFNMobileOnClassicBuild = true;
    this->bPortraitWebAuthFNMobileOnClassicBuild = false;
    this->bBacchusFrontendLabelShown = false;
    this->NoWeaponZoneMaxDestroyCount = 100;
    this->NoWeaponZoneResetDestroyCountRate = 10.00f;
    this->bAllowCurieIfCreativeOrPlayground = false;
    this->bEnableServerSendPlayerInteractions = true;
    this->ServerSendPlayerInteractionsIntervalSeconds = 60.00f;
    this->bEnableServerSendPlayerInteractionsRankInCreativeMode = false;
    this->bEnableServerPlayerInteractionIdleTracking = true;
    this->bGyroV2Enabled = false;
    this->bFlickStickEnabled = false;
    this->bEnableBacchusDialogSystem = true;
    this->bBacchusDialogSystemSkipConfirmationStep = true;
    this->bMobileDisableResolutionReset = true;
    this->bMotionAxisMobileDefaultToYaw = true;
    this->bShouldRestartCreativeServersForCalendarEventChanges = false;
    this->bCreativeEmoteControllerUseWhitelist = false;
}

bool UFortRuntimeOptions::ShouldShowNewMOTD(const UWidget* ContextWidget) const {
    return false;
}

bool UFortRuntimeOptions::ShouldShowLeaderboardPrivacySettings() const {
    return false;
}

void UFortRuntimeOptions::SetEnableMainMenuSocialButton(bool NewValue) {
}

bool UFortRuntimeOptions::IsSitoutOptionEnabled() {
    return false;
}

bool UFortRuntimeOptions::IsShippingBuild() const {
    return false;
}

bool UFortRuntimeOptions::IsPartyInProgressEnabled() {
    return false;
}

bool UFortRuntimeOptions::IsMatchmakingKnobVisible(const FString& KnobName) const {
    return false;
}

bool UFortRuntimeOptions::IsMatchmakingKnobEnabled(const FString& KnobName) const {
    return false;
}

bool UFortRuntimeOptions::IsInviteUIDisabled() const {
    return bInviteUIDisabled;
}

bool UFortRuntimeOptions::IsGiftingDisabled() const {
    return false;
}

bool UFortRuntimeOptions::IsGameplayMessageEnabled(const FName& MessageOwnerClassName, const FName& MessageName) const {
    return false;
}

TArray<FString> UFortRuntimeOptions::GetValidAffiliateNames() const {
    return TArray<FString>();
}

bool UFortRuntimeOptions::GetShowReplayTrailerButton_Athena() const {
    return bShowReplayTrailerButton_Athena;
}

UFortRuntimeOptions* UFortRuntimeOptions::GetRuntimeOptions() {
    return NULL;
}

bool UFortRuntimeOptions::GetRebootShowInInventory() const {
    return false;
}

float UFortRuntimeOptions::GetRebootDirectiveDisplayTime() const {
    return RebootDirectiveDisplayTime;
}

float UFortRuntimeOptions::GetRebootChipExpirationTime() const {
    return RebootChipExpirationTime;
}

FText UFortRuntimeOptions::GetOverrideBonusEventXpTitleText() const {
    return FText::GetEmpty();
}

int32 UFortRuntimeOptions::GetNumGameplayMessageChannels() const {
    return NumGameplayMessageChannels;
}

FString UFortRuntimeOptions::GetLobbyGenericLinkButtonURL() {
    return TEXT("");
}

FText UFortRuntimeOptions::GetLobbyGenericLinkButtonOverrideText() {
    return FText::GetEmpty();
}

bool UFortRuntimeOptions::GetIsFriendLinkEnabled() const {
    return false;
}

bool UFortRuntimeOptions::GetIsDonutIdleGameEnabled() {
    return false;
}

FGameplayTagContainer UFortRuntimeOptions::GetInvalidCreativeItemTags(const FGameplayTagContainer& AdditionalInvalidCreativeItemTags) const {
    return FGameplayTagContainer{};
}

float UFortRuntimeOptions::GetHPMicrophoneToastDisplaySeconds() {
    return HPMicrophoneToastDisplaySeconds;
}

FString UFortRuntimeOptions::GetGameVersion() const {
    return TEXT("");
}

void UFortRuntimeOptions::GetExternalNewsURL(ESubGame CurrentMode, bool& bHasValidExternalURL, FString& ExternalURL, ENewsExternalURLMode& ButtonMode) const {
}

bool UFortRuntimeOptions::GetEnableSplitWalletTextNotice() const {
    return bEnableSplitWalletTextNotice;
}

bool UFortRuntimeOptions::GetEnableNotifyWhenPlaying() const {
    return bEnableNotifyWhenPlaying;
}

bool UFortRuntimeOptions::GetEnableMainMenuSocialButton() const {
    return false;
}

bool UFortRuntimeOptions::GetEnableLobbyGenericLinkButton() {
    return bEnableLobbyGenericLinkButton;
}

bool UFortRuntimeOptions::GetEnableLFG() const {
    return false;
}

float UFortRuntimeOptions::GetEliminationMarkerTTL() {
    return 0.0f;
}

bool UFortRuntimeOptions::GetDisablePurchaseHistoryScreen() const {
    return bDisablePurchaseHistoryScreen;
}

TArray<FRuntimeOptionTabStateInfo> UFortRuntimeOptions::GetDisabledFrontendNavigationTabs() const {
    return TArray<FRuntimeOptionTabStateInfo>();
}

float UFortRuntimeOptions::GetDelayGiftButtonWhenMFANotEnabledSeconds() const {
    return DelayGiftButtonWhenMFANotEnabledSeconds;
}

bool UFortRuntimeOptions::AllowInGameMatchmakingOnPlaylist(const UFortPlaylistAthena* PlaylistAthena) const {
    return false;
}

bool UFortRuntimeOptions::AllowInGameMatchmaking(UObject* WorldContextObject) const {
    return false;
}


