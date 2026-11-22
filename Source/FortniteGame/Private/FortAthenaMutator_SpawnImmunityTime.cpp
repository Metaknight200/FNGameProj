#include "FortAthenaMutator_SpawnImmunityTime.h"

AFortAthenaMutator_SpawnImmunityTime::AFortAthenaMutator_SpawnImmunityTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->SpawnImmunityTime = -1.00f;
}


