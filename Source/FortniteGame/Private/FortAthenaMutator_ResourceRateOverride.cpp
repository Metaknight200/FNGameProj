#include "FortAthenaMutator_ResourceRateOverride.h"

AFortAthenaMutator_ResourceRateOverride::AFortAthenaMutator_ResourceRateOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->ResourceRateOverrideIndex = 0;
}


