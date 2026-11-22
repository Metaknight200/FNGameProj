#include "FortPlacedPawnMarker.h"
#include "Engine/EngineTypes.h"

AFortPlacedPawnMarker::AFortPlacedPawnMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = false;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
}


