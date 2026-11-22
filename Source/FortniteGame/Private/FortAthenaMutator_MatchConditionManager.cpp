#include "FortAthenaMutator_MatchConditionManager.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_MatchConditionManager::AFortAthenaMutator_MatchConditionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
}

void AFortAthenaMutator_MatchConditionManager::OnSatisfied(const AFortAthenaMutator_MatchCondition* MatchConditionMutator, const bool bSatisfied) {
}

void AFortAthenaMutator_MatchConditionManager::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_MatchConditionManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_MatchConditionManager, TeamNums);
    DOREPLIFETIME(AFortAthenaMutator_MatchConditionManager, MatchConditionMutators);
}


