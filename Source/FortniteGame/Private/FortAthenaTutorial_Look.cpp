#include "FortAthenaTutorial_Look.h"

AFortAthenaTutorial_Look::AFortAthenaTutorial_Look(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LookMarker = NULL;
    this->StartArrowsActor = NULL;
}

void AFortAthenaTutorial_Look::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}


