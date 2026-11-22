#include "FortAthenaMutator_MatchCondition.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_MatchCondition::AFortAthenaMutator_MatchCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->TimingType = EMatchConditionMutatorTimingType::MatchImmediate;
    this->MatchConditionManager = NULL;
    this->bSatisfied = false;
    this->bLocked = false;
    this->bLockedPermanently = false;
}

void AFortAthenaMutator_MatchCondition::OnRep_bSatisfied() {
}

void AFortAthenaMutator_MatchCondition::OnGamePhaseChanged(const EAthenaGamePhase NewPhase, const EAthenaGamePhase PreviousHighestGamePhaseProcessed) {
}

void AFortAthenaMutator_MatchCondition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_MatchCondition, MatchConditionManager);
    DOREPLIFETIME(AFortAthenaMutator_MatchCondition, bSatisfied);
    DOREPLIFETIME(AFortAthenaMutator_MatchCondition, bLocked);
    DOREPLIFETIME(AFortAthenaMutator_MatchCondition, bLockedPermanently);
    DOREPLIFETIME(AFortAthenaMutator_MatchCondition, TeamDataArray);
}


