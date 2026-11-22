#include "FortAthenaWaterJackal.h"
#include "Net/UnrealNetwork.h"

AFortAthenaWaterJackal::AFortAthenaWaterJackal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoostTimers.AddDefaulted(1);
    this->FortWaterJackalVehicleConfigsClass = NULL;
    this->FortWaterJackalVehicleConfigs = NULL;
}

void AFortAthenaWaterJackal::OnRep_ReplicatedAttachState() {
}

void AFortAthenaWaterJackal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaWaterJackal, ReplicatedAttachState);
}


