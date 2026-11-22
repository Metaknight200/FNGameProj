#include "FortAthenaMutator_Wax.h"
#include "FortAthena_WaxToken.h"
#include "FortGameModePickup_Wax.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Wax::AFortAthenaMutator_Wax(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RespawnSound = NULL;
    this->GameEndMusicSound = NULL;
    this->GameEndMusicAudioComponent = NULL;
    this->TokenClass = AFortAthena_WaxToken::StaticClass();
    this->TokenPickupClass = AFortGameModePickup_Wax::StaticClass();
    this->PickupItemDef = NULL;
    this->LastEligibleLeader = NULL;
}

bool AFortAthenaMutator_Wax::ShouldBeUI_Visible(const AFortPlayerStateAthena* Player) const {
    return false;
}

void AFortAthenaMutator_Wax::SendTokenStats() {
}

void AFortAthenaMutator_Wax::OnRep_Leaders() {
}

void AFortAthenaMutator_Wax::OnNewGamePhase(EAthenaGamePhase NewPhase) {
}

bool AFortAthenaMutator_Wax::IsPlayerTeamLeader(const AFortPlayerStateAthena* Player) const {
    return false;
}

bool AFortAthenaMutator_Wax::IsPlayerMovingOrShooting(const AFortPlayerStateAthena* Player) const {
    return false;
}

bool AFortAthenaMutator_Wax::IsPlayerInPodium(const AFortPlayerStateAthena* Player) const {
    return false;
}

void AFortAthenaMutator_Wax::GetWaxUI_Info(float& MyPercent, float& Enemy1Pct, float& Enemy2Pct, float& Enemy3Pct, int32& MyRank) const {
}

int32 AFortAthenaMutator_Wax::GetTokensToWinBP() const {
    return 0;
}

int32 AFortAthenaMutator_Wax::GetTokensForPlayer(const AFortPlayerStateAthena* Player) const {
    return 0;
}

int32 AFortAthenaMutator_Wax::GetPlayerTeamScore(const AFortPlayerStateAthena* Player) const {
    return 0;
}

int32 AFortAthenaMutator_Wax::GetPlayerTeamPlacement(const AFortPlayerStateAthena* Player) const {
    return 0;
}

int32 AFortAthenaMutator_Wax::GetPlayerPlacement(const AFortPlayerStateAthena* Player) const {
    return 0;
}

int32 AFortAthenaMutator_Wax::GetPlayerLives(const AFortPlayerStateAthena* Player) const {
    return 0;
}

EWaxState AFortAthenaMutator_Wax::GetCurrentWaxState(const AFortPlayerStateAthena* Player) const {
    return EWaxState::None;
}

void AFortAthenaMutator_Wax::CommonDeadPawn(AFortPlayerPawnAthena* DeadPawn) {
}

void AFortAthenaMutator_Wax::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Wax, TeamLeadersInOrder);
    DOREPLIFETIME(AFortAthenaMutator_Wax, PlayerData);
}


