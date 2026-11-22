#include "FortAthenaMutator_InventoryOverride_Bucket.h"
#include "EAthenaInventorySpawnOverride.h"

AFortAthenaMutator_InventoryOverride_Bucket::AFortAthenaMutator_InventoryOverride_Bucket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->InventoryUpdateOverride = EAthenaInventorySpawnOverride::Always;
}


