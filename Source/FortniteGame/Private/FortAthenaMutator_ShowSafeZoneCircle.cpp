#include "FortAthenaMutator_ShowSafeZoneCircle.h"

AFortAthenaMutator_ShowSafeZoneCircle::AFortAthenaMutator_ShowSafeZoneCircle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatesGameState = true;
    this->bShowSafeZoneCircle = true;
}


