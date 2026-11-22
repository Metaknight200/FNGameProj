#include "FortAthenaMutator_TeamPawnColor.h"

AFortAthenaMutator_TeamPawnColor::AFortAthenaMutator_TeamPawnColor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->TeamPawnColorControllerComponentClass = NULL;
}


