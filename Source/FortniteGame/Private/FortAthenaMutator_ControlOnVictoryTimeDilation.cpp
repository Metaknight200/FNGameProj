#include "FortAthenaMutator_ControlOnVictoryTimeDilation.h"

AFortAthenaMutator_ControlOnVictoryTimeDilation::AFortAthenaMutator_ControlOnVictoryTimeDilation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
}


