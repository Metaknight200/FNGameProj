#include "FortAthenaMutator_HideHUDElements.h"

AFortAthenaMutator_HideHUDElements::AFortAthenaMutator_HideHUDElements(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetTemporary = true;
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AFortAthenaMutator_HideHUDElements::OnSafeZonePhaseChanged(int32 SafeZoneIndex) {
}

void AFortAthenaMutator_HideHUDElements::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}


