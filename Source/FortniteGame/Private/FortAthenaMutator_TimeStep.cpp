#include "FortAthenaMutator_TimeStep.h"

AFortAthenaMutator_TimeStep::AFortAthenaMutator_TimeStep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = true;
    this->TimeStep = 1.00f;
}


