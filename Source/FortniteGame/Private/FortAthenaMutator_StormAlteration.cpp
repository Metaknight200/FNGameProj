#include "FortAthenaMutator_StormAlteration.h"

AFortAthenaMutator_StormAlteration::AFortAthenaMutator_StormAlteration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
}

void AFortAthenaMutator_StormAlteration::ApplyStormAlterations() {
}


