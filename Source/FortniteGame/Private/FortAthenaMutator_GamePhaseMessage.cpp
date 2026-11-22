#include "FortAthenaMutator_GamePhaseMessage.h"

AFortAthenaMutator_GamePhaseMessage::AFortAthenaMutator_GamePhaseMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetTemporary = true;
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AFortAthenaMutator_GamePhaseMessage::OnLoadingScreenVisibilityChanged(bool bVisible) {
}

void AFortAthenaMutator_GamePhaseMessage::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}


