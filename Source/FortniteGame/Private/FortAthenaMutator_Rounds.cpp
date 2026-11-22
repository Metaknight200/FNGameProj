#include "FortAthenaMutator_Rounds.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Rounds::AFortAthenaMutator_Rounds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->RoundPhase = EAthenaRoundsMutatorPhase::GamePhase_Setup;
    this->CurrentRoundNum = 0;
    this->MatchConditionManager = NULL;
}

void AFortAthenaMutator_Rounds::OnRep_RoundPhase(const EAthenaRoundsMutatorPhase OldRoundPhase) {
}

void AFortAthenaMutator_Rounds::OnRep_CurrentRoundNum() {
}

void AFortAthenaMutator_Rounds::OnMatchConditionTimingSatisfied(const EMatchConditionMutatorTimingType TimingType) {
}

void AFortAthenaMutator_Rounds::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

int32 AFortAthenaMutator_Rounds::GetRoundNum() const {
    return 0;
}

EAthenaRoundsMutatorPhase AFortAthenaMutator_Rounds::GetPhase() const {
    return EAthenaRoundsMutatorPhase::GamePhase_Setup;
}

int32 AFortAthenaMutator_Rounds::GetLastCompletedRoundNum() const {
    return 0;
}

void AFortAthenaMutator_Rounds::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Rounds, RoundPhase);
    DOREPLIFETIME(AFortAthenaMutator_Rounds, CurrentRoundNum);
}


