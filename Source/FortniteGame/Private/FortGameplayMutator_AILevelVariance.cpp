#include "FortGameplayMutator_AILevelVariance.h"

AFortGameplayMutator_AILevelVariance::AFortGameplayMutator_AILevelVariance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->MinVariance = 1.00f;
    this->MaxVariance = 1.00f;
}


