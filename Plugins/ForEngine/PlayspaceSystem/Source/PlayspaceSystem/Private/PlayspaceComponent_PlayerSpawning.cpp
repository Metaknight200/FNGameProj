#include "PlayspaceComponent_PlayerSpawning.h"

UPlayspaceComponent_PlayerSpawning::UPlayspaceComponent_PlayerSpawning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bQueueUserForSpawnWhenAdded = false;
    this->SpawnDelayMin = 0.00f;
    this->SpawnDelayMax = 0.00f;
}


