#include "FortAthenaMutator_RespawnLocation.h"

AFortAthenaMutator_RespawnLocation::AFortAthenaMutator_RespawnLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = true;
    this->bRespawnInAir = true;
    this->bRespawnAtDeath = true;
    this->RespawnHeight = 0.00f;
}



