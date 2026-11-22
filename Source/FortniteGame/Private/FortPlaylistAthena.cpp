#include "FortPlaylistAthena.h"

UFortPlaylistAthena::UFortPlaylistAthena() {
    this->EnforceSquadFill = true;
    this->DefaultFirstTeam = 3;
    this->DefaultLastTeam = 102;
    this->bRewardsTrackPlacement = true;
    this->bRewardsAllowXPProgression = true;
    this->bRewardForRevivingTeammates = false;
    this->RewardPlacementBonusType = ERewardPlacementBonusType::Squad;
    this->RewardsPlacementThreshold = 3;
    this->RewardTimePlayedType = ERewardTimePlayedType::Default;
    this->RewardTimePlayedXPPerMinute = -1;
    this->RewardTimePlayedXPFlatValue = -1;
    this->bAllowSinglePartyMatches = false;
    this->bRequeueAfterFailedSessionAssignment = true;
    this->bIsTournament = false;
    this->bUseMultidivisionQueues = false;
    this->CompetitivePointClamp = 100;
    this->MaxBucketCapacity = -1;
    this->MaxPendingMatches = -1;
    this->bUseInputRules = true;
    this->bAllowBackfill = false;
    this->MinBackfillMatchPlayers = 0;
    this->MaxTeamScoreAllowedForBackfill = 0;
    this->MinPlayersForPrivateServer = 0;
    this->MaxTeamScoreDiscrepancyPercent = 0.00f;
    this->bUsePlayerRating = false;
    this->bEnableRatingUpdate = false;
    this->bEnableDynamicBotBackfill = false;
    this->bRequireCrossplayEnabled = true;
    this->bLimitedPoolMatchmakingEnabled = false;
    this->bAllowedInLeto = false;
    this->LastQueuedPlaylistPriority = -1;
    this->bAllowInGameMatchMaking = true;
    this->bAllowReturnToMatchmakingOriginOnMatchEnd = false;
    this->bAllowBotsInHumanTeams = false;
    this->bForceNewPlayerStateOnReconnect = false;
    this->bShouldErrorOnAdditionalContentFailure = false;
    this->bRemoveFromSquadOnLogout = false;
    this->DADTestValue = 0;
    this->WinConditionType = EAthenaWinCondition::LastManStanding;
    this->WinConditionPlayersRemaining = 1;
    this->bIsLargeTeamGame = false;
    this->bShouldSpreadTeams = true;
    this->bIgnoreDefaultQuests = false;
    this->bDisallowMultipleWeaponsOfType = false;
    this->bAllowEditingEnemyWalls = false;
    this->LootDropRounds = 1;
    this->ForceKickAfterDeathTime = 0.00f;
    this->ForceKickAfterDeathMode = EForceKickAfterDeathMode::Disabled;
    this->QuickbarSelectionPreservationMode = EWeaponSelectionPreservationType::KeepSelectionWhenRespawning;
    this->bIgnoreGameModeStartingInventory = false;
    this->bRequirePickaxeInStartingInventory = true;
    this->DestructedBuildingInGridTimeout = 0.00f;
    this->bTeamFilterDestructedBuildingsInGrid = true;
    this->bOwnerFilterDestructedBuildingsInGrid = false;
    this->bEnableBuildingCreatedEvent = false;
    this->MaximumAspectRatio = 0.00f;
    this->bVehiclesDestroyAllBuildingSMActorsOnContact = false;
    this->VehicleBoundsXYSplineClass = NULL;
    this->bAutoAcquireSpawnChip = false;
    this->SoundMix = NULL;
    this->bAllowHardcoreModifiers = false;
    this->bForceCameraFadeOnRespawn = true;
    this->MinTimeBeforeRespawnCameraFade = 3.00f;
    this->RespawnType = EAthenaRespawnType::None;
    this->bRespawnInAir = true;
    this->bForceRespawnLocationInsideOfVolume = false;
    this->bSkipWarmup = false;
    this->bSkipAircraft = false;
    this->bAllowWarmupPlayerStartInSetupPhase = true;
    this->WarmupEarlyRequiredPlayerPercent = 0.00f;
    this->AirCraftBehavior = EAirCraftBehavior::Default;
    this->bUseCustomAircraftPathSelection = false;
    this->bUseSameDirectionForOpposingAircraft = false;
    this->bAircraftDropOnlyWithinSafeZone = false;
    this->AircraftPathOffsetFromMapCenterMin = 0.00f;
    this->AircraftPathOffsetFromMapCenterMax = 0.00f;
    this->AircraftPathMidpointSelectionRadiusMin = 20000.00f;
    this->AircraftPathMidpointSelectionRadiusMax = 40000.00f;
    this->LastStepPushAircraftCenterLine_Magnitude = 0.00f;
    this->LastStepPushAircraftCenterLine_Direction = 0.00f;
    this->bDisableAudioShapes = false;
    this->NonRenderedCharacterAnimationScale = 1.00f;
    this->PlaylistMissionGen = NULL;
    this->bForceLTMLoadingScreenBackground = false;
    this->MissionIcon = NULL;
    this->bLimitedTimeMode = true;
    this->bDisable_ReportAPlayerReason_TeamingUpWithEnemies_WhileInGame = false;
    this->bDisplayScoreInHUD = false;
    this->bDisplayRespawnWidget = false;
    this->bDisableMatchStatsDisplay = false;
    this->bEnforceFullSquadInUI = false;
    this->bShowEliminationIndicatorForSelf = false;
    this->bShowEliminationIndicatorForSquadmates = false;
    this->bShowEliminationIndicatorForTeammates = false;
    this->bShowEliminationIndicatorForEnemies = false;
    this->bLeaderboardDisplaysIndividuals = true;
    this->bUsePointLeaderAsTeamLeaderInLeaderboard = true;
    this->TypeOfLeaderboard = EFortLeaderboardMetric::Score;
    this->CustomGameChannel = ECustomGameVoiceChannel::Squad;
    this->MapScaleOverride = 0.00f;
    this->bDrawCreativeDynamicIslands = false;
    this->bUseAsyncPhysics = true;
    this->ServerMaxTickRate = EFortServerTickRate::UseDefault;
    this->SafeZoneStartUp = ESafeZoneStartUp::UseDefaultGameBehavior;
    this->bWarmUpInStorm = false;
    this->StormEffectDelay = 0.00f;
    this->bDisplayFinalStormPosition = false;
    this->bDrawLineToStormCircleIfOutside = true;
    this->LastSafeZoneIndex = -1;
    this->bUseDefaultSupplyDrops = true;
    this->bPlaylistUsesCustomCharacterParts = false;
    this->NetActorDiscoveryBudgetInKBytesPerSec = 0;
    this->NetDormancyNumFramesUntilObsolete = -1;
    this->bEnableCreativeMode = false;
    this->bEnableSpawningStartup = true;
    this->bAllowTeamSwitching = false;
    this->bShowTeamSelectButton = false;
    this->bAllowLayoutRequirementsFeature = false;
    this->bUseCreativeStarterIsland = false;
    this->bForceCustomMinigame = false;
    this->bPreloadAthenaMapsForMatchmaking = true;
    this->bUsesAnimationSharing = false;
    this->bAllowBroadcasting = false;
    this->bAllowSpectateAPartyMember = false;
    this->bActivateCurie = true;
    this->PlaylistStatId = -1;
    this->bAccumulateToProfileStats = false;
    this->bSaveToRecentGameList = true;
    this->bEnableStatsV2Stats = true;
    this->AISettings = NULL;
    this->ServerBotManagerClass = NULL;
}

int32 UFortPlaylistAthena::GetMaxTeamSize(const UObject* InWorldContext, const UFortPlaylistAthena* InPlaylist) {
    return 0;
}

int32 UFortPlaylistAthena::GetMaxPlayerCount(const UObject* InWorldContext, const UFortPlaylistAthena* InPlaylist) {
    return 0;
}

int32 UFortPlaylistAthena::GetMaxNumberOfTeams(const UObject* InWorldContext, const UFortPlaylistAthena* InPlaylist) {
    return 0;
}

int32 UFortPlaylistAthena::GetLastTeamNumber(const UObject* InWorldContext, const UFortPlaylistAthena* InPlaylist) {
    return 0;
}

void UFortPlaylistAthena::CreateCalendarPayload_RegionalOverride() {
}

void UFortPlaylistAthena::CreateCalendarPayload_Enabling() {
}


