#include "FortAthenaMutator_CosmeticLoadoutOverride.h"

AFortAthenaMutator_CosmeticLoadoutOverride::AFortAthenaMutator_CosmeticLoadoutOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
}


