#include "FortAthenaMutator_ResourcesEarned.h"

AFortAthenaMutator_ResourcesEarned::AFortAthenaMutator_ResourcesEarned(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->ResourcesEarnedMultiplier = 1.00f;
}


