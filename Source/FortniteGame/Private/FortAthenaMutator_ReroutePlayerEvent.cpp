#include "FortAthenaMutator_ReroutePlayerEvent.h"

AFortAthenaMutator_ReroutePlayerEvent::AFortAthenaMutator_ReroutePlayerEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
}

void AFortAthenaMutator_ReroutePlayerEvent::FlushEventQueue() {
}


