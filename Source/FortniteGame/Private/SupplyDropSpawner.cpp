#include "SupplyDropSpawner.h"

ASupplyDropSpawner::ASupplyDropSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinSpawnHeightOverride = 28000.00f;
    this->MaxSpawnHeightOverride = 32000.00f;
}


