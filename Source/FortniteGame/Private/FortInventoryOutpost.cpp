#include "FortInventoryOutpost.h"
#include "Net/UnrealNetwork.h"

AFortInventoryOutpost::AFortInventoryOutpost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasUnavailableItems = false;
}

void AFortInventoryOutpost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortInventoryOutpost, bHasUnavailableItems);
}


