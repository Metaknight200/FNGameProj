#include "FortAthenaMutator_Uranium.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Uranium::AFortAthenaMutator_Uranium(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoundIntroFactionSound_Attacking = NULL;
    this->RoundIntroFactionSound_Defending = NULL;
    this->MatchEndSound_Win_Attackers = NULL;
    this->MatchEndSound_Win_Defenders = NULL;
    this->MatchEndSound_Lose_Attackers = NULL;
    this->MatchEndSound_Lose_Defenders = NULL;
    this->PushCartClass = NULL;
    this->StormShieldClass = NULL;
    this->StormShield = NULL;
    this->RespawnRadius = 5000.00f;
    this->CurrentMovingRespawnOffset_PusherTeam = 0.00f;
    this->CurrentMovingRespawnOffset_DefenderTeam = 0.00f;
    this->NumberOfRounds = 1;
    this->RoundEndCondition = EUraniumRoundEndCondition::RanOutOfTime_Or_CheckpointReached;
    this->CartMovementRuleOnNewRound = EUraniumCartMovementRuleOnNewRound::NoChange;
    this->RoundPhaseDurations[0] = 0.00f;
    this->RoundPhaseDurations[1] = 0.00f;
    this->RoundPhaseDurations[2] = 0.00f;
    this->RoundPhaseDurations[3] = 0.00f;
    this->RoundPhaseDurations[4] = 0.00f;
    this->RoundPhaseDurations[5] = 0.00f;
    this->RoundPhaseDurations[6] = 0.00f;
    this->RoundPhaseDurations[7] = 0.00f;
    this->RoundPhaseDurations[8] = 0.00f;
    this->RoundPhaseDurations[9] = 0.00f;
    this->RoundPhaseDurations[10] = 0.00f;
    this->RoundPhaseDurations[11] = 0.00f;
    this->RoundPhaseDurations[12] = 0.00f;
    this->RoundPhaseDurations[13] = 0.00f;
    this->RoundPhaseDurations[14] = 0.00f;
    this->EndOfRoundCameraFadeOutTime = 0.25f;
    this->EndOfRoundCameraFadeInTime = 0.50f;
    this->EndOfRoundStasisDelay = 3.00f;
    this->CurrentRoundPhase = EUraniumRoundPhase::None;
    this->bRoundTimerStarted = false;
    this->PushersAbandonedCartOvertimeInterval = 20;
    this->bPushCartIsPushableAtStart = false;
    this->PushersAbandonedCartStartTime = -1.00f;
    this->PushersAbandonedCartDuration = 0.00f;
    this->bInOvertime = false;
    this->bPerkModeOn = false;
    this->bShouldPlayFactionIntro = false;
    this->MinimapMaterialParameterCollection = NULL;
    this->bShowFullSplineOnMapUI = false;
    this->CheckPointMarkerClass = NULL;
    this->bIsSafeToTurnOnCameraAfterRespawn = false;
    this->bForcePerkPickerOnCheckpoint = false;
    this->TeleportMutator = NULL;
    this->InventoryOverrideMutator = NULL;
    this->RespawnWaveMutator = NULL;
    this->CheckpointTeleportPlayersReleased = 0;
    this->CheckpointTeleportComplete = 0;
    this->bCheatDrawRespawnLocations = true;
}

void AFortAthenaMutator_Uranium::TickUraniumEvents() {
}

void AFortAthenaMutator_Uranium::TeleportPlayerLoadComplete(AFortPlayerStateAthena* PlayerState) {
}

void AFortAthenaMutator_Uranium::StartEndOfRoundStasis() {
}

void AFortAthenaMutator_Uranium::OnRep_TeleportComplete() {
}

void AFortAthenaMutator_Uranium::OnRep_RoundData() {
}

void AFortAthenaMutator_Uranium::OnRep_PushCart() {
}

void AFortAthenaMutator_Uranium::OnRep_CurrentRoundPhase() {
}

void AFortAthenaMutator_Uranium::OnRep_CurrentPOI() {
}

void AFortAthenaMutator_Uranium::OnRep_bInOvertime() {
}

void AFortAthenaMutator_Uranium::OnPushCartTeamsRolesChanged(uint8 NewPusherTeam, uint8 NewDefenerTeam) {
}

void AFortAthenaMutator_Uranium::OnPushCartReachedCheckPoint(int32 CheckPointIndex) {
}

void AFortAthenaMutator_Uranium::OnPushCartPushersOrDefendersChanged() {
}

void AFortAthenaMutator_Uranium::OnPlaylistDataLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags) {
}

void AFortAthenaMutator_Uranium::MulticastSetWinningTeams_Implementation(const TArray<uint8>& InWinningTeams) {
}

void AFortAthenaMutator_Uranium::HandleTeleportComplete() {
}

void AFortAthenaMutator_Uranium::HandleRoundPhase(EUraniumRoundPhase NewRoundPhase) {
}

uint8 AFortAthenaMutator_Uranium::GetWinningTeamForRound(int32 RoundNumber) const {
    return 0;
}

void AFortAthenaMutator_Uranium::GetRoundTeamWinners(TArray<uint8>& TeamWinnersEachRound) {
}

AFortPlayerPushableCart* AFortAthenaMutator_Uranium::GetPushCart() const {
    return NULL;
}

int32 AFortAthenaMutator_Uranium::GetCurrentRoundNumber() const {
    return 0;
}

int32 AFortAthenaMutator_Uranium::GetCurrentRoundCheckPoint() const {
    return 0;
}

void AFortAthenaMutator_Uranium::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Uranium, PushCart);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, StormShield);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, RespawnLocation_PusherTeam);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, RespawnLocation_DefenderTeam);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, CurrentPOI);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, RoundData);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, CurrentRoundPhase);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, bRoundTimerStarted);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, PushersAbandonedCartStartTime);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, PushersAbandonedCartDuration);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, bInOvertime);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, bIsSafeToTurnOnCameraAfterRespawn);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, CheckpointTeleportPlayersReleased);
    DOREPLIFETIME(AFortAthenaMutator_Uranium, CheckpointTeleportComplete);
}


