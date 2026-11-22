#include "FortAthenaMutator.h"

AFortAthenaMutator::AFortAthenaMutator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = false;
    this->bMutatesGameState = false;
    this->CachedGameMode = NULL;
    this->CachedGameState = NULL;
    this->OverridePriority = EFortMutatorOverridePriority::None;
}


