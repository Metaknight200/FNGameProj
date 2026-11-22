#include "FortSaveFileBuildingInstructionsHandler.h"
#include "Components/SceneComponent.h"

AFortSaveFileBuildingInstructionsHandler::AFortSaveFileBuildingInstructionsHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent0"));
    this->bUseAbsoluteCoordinates = true;
    this->bTrackDestroyedBuildings = false;
    this->bLoadInvisible = false;
    this->bDespawnOnBuildingsSpawned = false;
    this->bSpawnBuildingsAutomaticallyAfterLoad = true;
}

bool AFortSaveFileBuildingInstructionsHandler::SaveBuildings(AFortPlayerController* FortPC) {
    return false;
}

bool AFortSaveFileBuildingInstructionsHandler::ResetBuildings() {
    return false;
}

void AFortSaveFileBuildingInstructionsHandler::LoadBuildings(AFortPlayerController* FortPC) {
}

bool AFortSaveFileBuildingInstructionsHandler::AreBuildingsLoaded() {
    return false;
}


