#include "FortAthenaMutator_GliderOverride.h"

AFortAthenaMutator_GliderOverride::AFortAthenaMutator_GliderOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->GliderOverride = NULL;
}

void AFortAthenaMutator_GliderOverride::PawnRespawned(AFortPawn* RespawnedPawn) {
}


