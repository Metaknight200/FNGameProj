#include "FortSpawnAIRequest.h"

FFortSpawnAIRequest::FFortSpawnAIRequest() {
    // Initialize reflected value fields omitted by the dump.
    this->SpawnLocation = FVector::ZeroVector;
    this->SpawnRotation = FRotator::ZeroRotator;
    this->EnemyIndex = 0;
    this->SpawnPoint = NULL;
    this->bIgnoreCollisionWhenSpawning = false;
}

