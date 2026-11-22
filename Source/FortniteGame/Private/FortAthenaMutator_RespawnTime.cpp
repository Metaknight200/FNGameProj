#include "FortAthenaMutator_RespawnTime.h"

AFortAthenaMutator_RespawnTime::AFortAthenaMutator_RespawnTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameState = true;
    this->RespawnTime = 0.00f;
}


