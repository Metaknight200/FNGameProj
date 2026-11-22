#include "FortBuildingInstancedSpawner.h"

AFortBuildingInstancedSpawner::AFortBuildingInstancedSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildingToInstance = NULL;
}

void AFortBuildingInstancedSpawner::HandlePlayerAdded(APlayerController* AddedPlayer) {
}


