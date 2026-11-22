#include "FortAthenaMutator_GravityMultiplier.h"

AFortAthenaMutator_GravityMultiplier::AFortAthenaMutator_GravityMultiplier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameState = true;
    this->GravityOverride = 0;
    this->GravityPresets = NULL;
}


