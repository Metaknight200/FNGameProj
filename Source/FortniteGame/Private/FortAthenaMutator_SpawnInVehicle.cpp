#include "FortAthenaMutator_SpawnInVehicle.h"

AFortAthenaMutator_SpawnInVehicle::AFortAthenaMutator_SpawnInVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->VehicleClass = NULL;
    this->bPlacePawnInVehicleOnLoad = true;
}


