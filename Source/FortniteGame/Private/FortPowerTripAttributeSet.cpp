#include "FortPowerTripAttributeSet.h"
#include "Net/UnrealNetwork.h"

UFortPowerTripAttributeSet::UFortPowerTripAttributeSet() {
}

void UFortPowerTripAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPowerTripAttributeSet, Power);
    DOREPLIFETIME(UFortPowerTripAttributeSet, MaxPower);
}


