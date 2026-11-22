#include "FortControllerEffect_SpawnActor.h"

UFortControllerEffect_SpawnActor::UFortControllerEffect_SpawnActor() {
    this->bUseWeightedActorList = false;
    this->ActorClass = NULL;
    this->SpawnDelay = -1.00f;
    this->bSpawnRelativeToServiceProvider = true;
    this->bLocalSpaceOffsetIgnorePitchAndRoll = true;
    this->TransformGenerator = NULL;
}


