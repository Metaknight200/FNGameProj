#include "FortAthenaMutator_ButterflyEvent.h"

AFortAthenaMutator_ButterflyEvent::AFortAthenaMutator_ButterflyEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatesGameMode = true;
    this->PawnGatherFrequency = 0.10f;
}

void AFortAthenaMutator_ButterflyEvent::UpdatePawnBroadcasting() {
}

void AFortAthenaMutator_ButterflyEvent::StopGatheringPawns() {
}

void AFortAthenaMutator_ButterflyEvent::StartGatheringPawns() {
}


