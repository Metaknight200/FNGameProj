#include "FortAthenaMutator_QuickbarRestore.h"

AFortAthenaMutator_QuickbarRestore::AFortAthenaMutator_QuickbarRestore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
}

void AFortAthenaMutator_QuickbarRestore::OnClientStartedRespawn(AFortPlayerControllerZone* PlayerController) {
}


