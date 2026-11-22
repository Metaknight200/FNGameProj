#include "FortAthenaMutator_Storm.h"

AFortAthenaMutator_Storm::AFortAthenaMutator_Storm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = true;
}

void AFortAthenaMutator_Storm::PauseStormProgression(bool bPause) {
}

void AFortAthenaMutator_Storm::PauseStormDamage(bool bPause) {
}


