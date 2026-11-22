#include "FortOstrichSet.h"
#include "Net/UnrealNetwork.h"

UFortOstrichSet::UFortOstrichSet() {
}

void UFortOstrichSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortOstrichSet, WalkSpeed);
    DOREPLIFETIME(UFortOstrichSet, SprintSpeed);
}


