#include "GameHubPlayspace.h"

AGameHubPlayspace::AGameHubPlayspace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSubscribeToMeshNetwork = true;
    this->bSimulatePlayerDamage = true;
}


