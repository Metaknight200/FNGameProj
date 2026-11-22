#include "FortAthenaMutator_MaxItemSlots.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_MaxItemSlots::AFortAthenaMutator_MaxItemSlots(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->MaxItemSlots = 5.00f;
}

void AFortAthenaMutator_MaxItemSlots::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_MaxItemSlots, MaxItemSlots);
}


