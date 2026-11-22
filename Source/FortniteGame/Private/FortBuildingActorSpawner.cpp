#include "FortBuildingActorSpawner.h"

AFortBuildingActorSpawner::AFortBuildingActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorClassToSpawn = NULL;
    this->QueryTemplate = NULL;
}


