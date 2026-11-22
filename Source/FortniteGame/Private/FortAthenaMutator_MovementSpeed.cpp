#include "FortAthenaMutator_MovementSpeed.h"

AFortAthenaMutator_MovementSpeed::AFortAthenaMutator_MovementSpeed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameState = true;
    this->MovementSpeed = 1.00f;
}


