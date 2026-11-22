#include "FortMission_VehicleSpawn.h"

AFortMission_VehicleSpawn::AFortMission_VehicleSpawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnLocationQuery = NULL;
}

void AFortMission_VehicleSpawn::VehicleDestroyed(AActor* InVehicle) {
}


