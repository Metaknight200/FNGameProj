#include "FortAthenaMutator_SupplyDrop.h"

AFortAthenaMutator_SupplyDrop::AFortAthenaMutator_SupplyDrop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = true;
    this->BasePlacementQuery = NULL;
    this->BaseQueryingAttemptIntervalTimeSeconds = 0.10f;
    this->SupplyDropRemovalQueryInterval = 5.00f;
}

void AFortAthenaMutator_SupplyDrop::RemoveOutOfStormSupplyDrop() {
}


