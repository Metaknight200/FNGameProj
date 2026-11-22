#include "FortAthenaMutator_FallDamageMultiplier.h"

AFortAthenaMutator_FallDamageMultiplier::AFortAthenaMutator_FallDamageMultiplier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameState = true;
    this->FallDamageMultiplier = 1.00f;
}


