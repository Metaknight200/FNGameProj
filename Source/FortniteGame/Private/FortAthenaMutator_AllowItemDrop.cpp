#include "FortAthenaMutator_AllowItemDrop.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_AllowItemDrop::AFortAthenaMutator_AllowItemDrop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bAllowItemDrop = false;
}

void AFortAthenaMutator_AllowItemDrop::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_AllowItemDrop, bAllowItemDrop);
}


