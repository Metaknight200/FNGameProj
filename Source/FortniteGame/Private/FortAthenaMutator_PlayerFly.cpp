#include "FortAthenaMutator_PlayerFly.h"

AFortAthenaMutator_PlayerFly::AFortAthenaMutator_PlayerFly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bFlyEnabled = false;
    this->bAllowFlightSprint = false;
    this->FlySpeedModifierIndex = 1;
}


