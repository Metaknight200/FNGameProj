#include "FortGameMode.h"
#include "FortGameState.h"
#include "FortMissionManager.h"
#include "FortPlayerController.h"
#include "FortPlayerState.h"
#include "FortReplaySpectator.h"
#include "FortReplaySpectatorPawnBase.h"
#include "FortTeamInfo.h"
#include "FortUIZone.h"

AFortGameMode::AFortGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AFortGameState::StaticClass();
    this->PlayerControllerClass = AFortPlayerController::StaticClass();
    this->PlayerStateClass = AFortPlayerState::StaticClass();
    this->HUDClass = AFortUIZone::StaticClass();
    this->SpectatorClass = AFortReplaySpectatorPawnBase::StaticClass();
    this->ReplaySpectatorPlayerControllerClass = AFortReplaySpectator::StaticClass();
    this->bUseSeamlessTravel = true;
    this->bDisableCloudStorage = false;
    this->bTravelInitiated = false;
    this->CurrentPlaylistId = -1;
    this->ZoneIndex = -1;
    this->bPlayersInvincible = false;
    this->bKickIdlers = false;
    this->MaxIdleTime = 0.00f;
    this->NoScoreKickTime = 0.00f;
    this->bEnableNotifications = true;
    this->bEnableReplicationGraph = false;
    this->DeathPenaltyData = NULL;
    this->DeathPenaltyDataOverride = NULL;
    this->FortGameSession = NULL;
    this->bIsAutomatedTest = false;
    this->MissionManagerClass = AFortMissionManager::StaticClass();
    this->bContainersForceTossLoot = false;
    this->bOverrideRotationOnRestartPlayer = true;
    this->PendingTimerState = EFortGameplayState::Invalid;
    this->bDBNOEnabled = true;
    this->bWorldIsReady = false;
    this->bTheaterDataIsReady = false;
    this->TheaterSlot = -1;
    this->GameplayServerHitchThreshold = 0.08f;
    this->MovementTimeDiscrepancyHitchCooldown = 5.00f;
    this->AbilityRefireHitchCooldown = 2.00f;
    this->bCheckWeaponTracesForPlayerBuiltWalls = true;
    this->MatchHeartbeatManager = NULL;
    this->SharedMissionLists = NULL;
    this->TeamInfoClass = AFortTeamInfo::StaticClass();
    this->MissionGenerationManager = NULL;
    this->FlushManager = NULL;
    this->bAlwaysFlushMMREndZoneEvents = true;
    this->bOverrideQuickBars = false;
}

void AFortGameMode::OnEndOfDay() {
}

void AFortGameMode::DumpReservations() const {
}


