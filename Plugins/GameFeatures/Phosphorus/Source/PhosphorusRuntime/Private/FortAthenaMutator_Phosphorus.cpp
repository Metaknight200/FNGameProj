#include "FortAthenaMutator_Phosphorus.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Phosphorus::AFortAthenaMutator_Phosphorus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EjectAbilitySet = NULL;
    this->LeaderAbilitySet = NULL;
    this->PhosphorusPhase = EPhosphorusPhase::PreMatch;
    this->PlayerEnteredStormSound = NULL;
    this->StormMutator = NULL;
    this->SafeZoneOrderOptimizeMutator = NULL;
    this->PlayerSpawnPodMutator = NULL;
    this->CurrentRound = -1;
    this->RoundWinningTeamNum = 255;
    this->bCheatForcedStart = false;
}

void AFortAthenaMutator_Phosphorus::OnRep_PhosphorusPhase() {
}

void AFortAthenaMutator_Phosphorus::OnRep_CurrentRound() {
}

void AFortAthenaMutator_Phosphorus::OnPrePodLaunch() {
}

void AFortAthenaMutator_Phosphorus::OnPawnEjectedFromPod(AFortPlayerPawnAthena* Pawn) {
}

void AFortAthenaMutator_Phosphorus::OnAllPodsLaunched() {
}

void AFortAthenaMutator_Phosphorus::OnAllPodsLanded() {
}

bool AFortAthenaMutator_Phosphorus::IsTeamValid(const uint8 TeamNum) const {
    return false;
}

bool AFortAthenaMutator_Phosphorus::IsTeamAlive(const uint8 TeamNum) const {
    return false;
}

bool AFortAthenaMutator_Phosphorus::IsOnWinningTeam(const AFortPlayerPawnAthena* Pawn) const {
    return false;
}

void AFortAthenaMutator_Phosphorus::HandlePawnStormStatusChanged(AFortPlayerPawn* PlayerPawn, bool bIsInSafeZone) {
}

int32 AFortAthenaMutator_Phosphorus::GetTeamSize(const uint8 TeamNum) const {
    return 0;
}

AFortPlayerStateAthena* AFortAthenaMutator_Phosphorus::GetTeamMVP(const uint8 TeamNum) {
    return NULL;
}

FPhosphorusTeamData AFortAthenaMutator_Phosphorus::GetTeamDataCopy(const uint8 TeamNum) const {
    return FPhosphorusTeamData{};
}

void AFortAthenaMutator_Phosphorus::GetTeamDataArray(TArray<FPhosphorusTeamData>& OutTeamDataArray, const bool bMustBeValid, const bool bMustBeAlive, const bool bSortByScore) const {
}

uint8 AFortAthenaMutator_Phosphorus::GetRoundWinningTeamNum() const {
    return RoundWinningTeamNum;
}

int32 AFortAthenaMutator_Phosphorus::GetNumValidTeams() const {
    return 0;
}

int32 AFortAthenaMutator_Phosphorus::GetNumAliveTeams() const {
    return 0;
}

void AFortAthenaMutator_Phosphorus::GetLeadingTeamNums(TArray<uint8>& LeadingTeamNums) const {
}

AFortAthenaMutator_CustomStormMovement* AFortAthenaMutator_Phosphorus::GetCachedStormMutator() {
    return NULL;
}

void AFortAthenaMutator_Phosphorus::FadeToFirstRound() {
}

void AFortAthenaMutator_Phosphorus::AudioFadeChangeEvent(bool bFadeOut, float FadeTime) {
}

void AFortAthenaMutator_Phosphorus::AdvanceRound() {
}

void AFortAthenaMutator_Phosphorus::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Phosphorus, PhosphorusPhase);
    DOREPLIFETIME(AFortAthenaMutator_Phosphorus, TeamDataArray);
    DOREPLIFETIME(AFortAthenaMutator_Phosphorus, CurrentRound);
    DOREPLIFETIME(AFortAthenaMutator_Phosphorus, NumRoundsToWin);
    DOREPLIFETIME(AFortAthenaMutator_Phosphorus, RoundWinningTeamNum);
    DOREPLIFETIME(AFortAthenaMutator_Phosphorus, bCheatForcedStart);
}


