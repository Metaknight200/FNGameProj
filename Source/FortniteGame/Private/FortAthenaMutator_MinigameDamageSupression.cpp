#include "FortAthenaMutator_MinigameDamageSupression.h"

AFortAthenaMutator_MinigameDamageSupression::AFortAthenaMutator_MinigameDamageSupression(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bPreventPreGameDamage = false;
    this->bPreventPostGameDamage = false;
}


