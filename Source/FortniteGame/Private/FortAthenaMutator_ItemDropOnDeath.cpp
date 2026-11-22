#include "FortAthenaMutator_ItemDropOnDeath.h"

AFortAthenaMutator_ItemDropOnDeath::AFortAthenaMutator_ItemDropOnDeath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->RespawnRequirements = ERespawnRequirements::RespawnOnly;
}


