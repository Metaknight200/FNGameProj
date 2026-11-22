#include "FortAthenaMutator_CreativeCombineMinigameStats.h"

AFortAthenaMutator_CreativeCombineMinigameStats::AFortAthenaMutator_CreativeCombineMinigameStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->ChangingStat = NULL;
    this->StatMultiplier = 0.00f;
}


