#include "FortAthenaMutator_MaxWorldResource.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_MaxWorldResource::AFortAthenaMutator_MaxWorldResource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->MaxWorldResources = 0;
}

void AFortAthenaMutator_MaxWorldResource::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_MaxWorldResource, MaxWorldResources);
}


