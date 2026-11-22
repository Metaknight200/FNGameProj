#include "FortCowVehicleSet.h"
#include "Net/UnrealNetwork.h"

UFortCowVehicleSet::UFortCowVehicleSet() {
}

void UFortCowVehicleSet::OnRep_Fuel(const FFortGameplayAttributeData& OldValue) {
}

void UFortCowVehicleSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCowVehicleSet, MaxFuel);
    DOREPLIFETIME(UFortCowVehicleSet, Fuel);
}


