#include "FortAthenaMutator_InventoryOverride_TeamBucket.h"
#include "EAthenaInventorySpawnOverride.h"

AFortAthenaMutator_InventoryOverride_TeamBucket::AFortAthenaMutator_InventoryOverride_TeamBucket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->InventoryUpdateOverride = EAthenaInventorySpawnOverride::Always;
}


