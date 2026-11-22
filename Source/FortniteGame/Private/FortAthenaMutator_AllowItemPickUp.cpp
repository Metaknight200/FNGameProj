#include "FortAthenaMutator_AllowItemPickUp.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_AllowItemPickUp::AFortAthenaMutator_AllowItemPickUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bAllowItemPickup = true;
}

void AFortAthenaMutator_AllowItemPickUp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_AllowItemPickUp, bAllowItemPickup);
}


