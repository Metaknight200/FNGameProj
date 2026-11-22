#include "AthenaAISpawner.h"

UAthenaAISpawner::UAthenaAISpawner() {
}

int32 UAthenaAISpawner::RequestSpawn(UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, const FTransform& SpawnTransform) {
    return 0;
}

bool UAthenaAISpawner::CancelRequest(const int32 RequestID) {
    return false;
}


