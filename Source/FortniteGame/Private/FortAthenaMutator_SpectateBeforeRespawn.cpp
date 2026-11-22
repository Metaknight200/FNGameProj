#include "FortAthenaMutator_SpectateBeforeRespawn.h"

AFortAthenaMutator_SpectateBeforeRespawn::AFortAthenaMutator_SpectateBeforeRespawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
}

void AFortAthenaMutator_SpectateBeforeRespawn::OnClientStartedRespawn(AFortPlayerControllerZone* PlayerController) {
}


