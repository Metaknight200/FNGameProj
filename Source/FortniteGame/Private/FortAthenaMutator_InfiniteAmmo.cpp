#include "FortAthenaMutator_InfiniteAmmo.h"

AFortAthenaMutator_InfiniteAmmo::AFortAthenaMutator_InfiniteAmmo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameState = true;
    this->bInfiniteAmmo = false;
}


