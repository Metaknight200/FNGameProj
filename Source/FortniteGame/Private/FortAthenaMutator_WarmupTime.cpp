#include "FortAthenaMutator_WarmupTime.h"

AFortAthenaMutator_WarmupTime::AFortAthenaMutator_WarmupTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameState = true;
    this->WarmupTime = 0.00f;
}


