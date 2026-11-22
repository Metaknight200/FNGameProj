#include "BuildingTrapFloor_TargetDummy.h"
#include "Net/UnrealNetwork.h"

ABuildingTrapFloor_TargetDummy::ABuildingTrapFloor_TargetDummy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
}

void ABuildingTrapFloor_TargetDummy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingTrapFloor_TargetDummy, PathPointLocations);
}


