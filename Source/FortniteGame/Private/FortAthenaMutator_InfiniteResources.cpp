#include "FortAthenaMutator_InfiniteResources.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_InfiniteResources::AFortAthenaMutator_InfiniteResources(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bInfiniteResources = false;
}

void AFortAthenaMutator_InfiniteResources::UpdateResourceIcons() {
}

void AFortAthenaMutator_InfiniteResources::OnRep_bInfiniteResources() {
}

void AFortAthenaMutator_InfiniteResources::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_InfiniteResources, bInfiniteResources);
}


