#include "FortAthenaMutator_GiveItemsAtGamePhase.h"

AFortAthenaMutator_GiveItemsAtGamePhase::AFortAthenaMutator_GiveItemsAtGamePhase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhaseToGiveItems = EAthenaGamePhase::None;
}

void AFortAthenaMutator_GiveItemsAtGamePhase::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}


