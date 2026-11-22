#include "FortAthenaMutator_CustomRespawnLogic.h"

AFortAthenaMutator_CustomRespawnLogic::AFortAthenaMutator_CustomRespawnLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
}


