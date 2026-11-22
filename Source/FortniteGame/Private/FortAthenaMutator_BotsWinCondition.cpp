#include "FortAthenaMutator_BotsWinCondition.h"

AFortAthenaMutator_BotsWinCondition::AFortAthenaMutator_BotsWinCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->bOnlyBotRemaining = false;
}


