#include "FortAthenaMutator_ForceWeaponToAllowTargeting.h"

AFortAthenaMutator_ForceWeaponToAllowTargeting::AFortAthenaMutator_ForceWeaponToAllowTargeting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
}


