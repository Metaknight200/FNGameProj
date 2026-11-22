#include "FortIndicator.h"

UFortIndicator::UFortIndicator() {
    this->MaxDistance = 10000.00f;
    this->bMoveWithPawnState = false;
}

void UFortIndicator::OnParentActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


