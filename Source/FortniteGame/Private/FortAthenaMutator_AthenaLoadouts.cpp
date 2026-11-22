#include "FortAthenaMutator_AthenaLoadouts.h"

AFortAthenaMutator_AthenaLoadouts::AFortAthenaMutator_AthenaLoadouts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->LoadoutUserWidget = NULL;
}

void AFortAthenaMutator_AthenaLoadouts::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}


