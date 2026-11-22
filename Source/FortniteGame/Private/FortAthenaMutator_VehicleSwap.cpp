#include "FortAthenaMutator_VehicleSwap.h"

AFortAthenaMutator_VehicleSwap::AFortAthenaMutator_VehicleSwap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
}


