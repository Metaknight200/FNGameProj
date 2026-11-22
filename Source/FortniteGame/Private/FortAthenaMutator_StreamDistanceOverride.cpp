#include "FortAthenaMutator_StreamDistanceOverride.h"

AFortAthenaMutator_StreamDistanceOverride::AFortAthenaMutator_StreamDistanceOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bApplyScalability = true;
    this->bApplyAfterWarmup = true;
    this->bForceOverride = true;
}

void AFortAthenaMutator_StreamDistanceOverride::HandleGamePhaseChanged(EAthenaGamePhase NewPhase) {
}


