#include "BuildingTrap_WaypointDispenser.h"
#include "Templates/SubclassOf.h"

ABuildingTrap_WaypointDispenser::ABuildingTrap_WaypointDispenser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
    this->WaypointTypeIndex = 0;
}

ABuildingTrapFloor_Waypoint* ABuildingTrap_WaypointDispenser::BP_SpawnWaypointActor(TSubclassOf<ABuildingTrapFloor_Waypoint> Class, FTransform SpawnTransform) {
    return NULL;
}


