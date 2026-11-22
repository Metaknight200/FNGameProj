#include "FortGliderPackSet.h"
#include "Net/UnrealNetwork.h"

UFortGliderPackSet::UFortGliderPackSet() {
}

void UFortGliderPackSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortGliderPackSet, MaxCharges);
    DOREPLIFETIME(UFortGliderPackSet, CurrentCharges);
}


