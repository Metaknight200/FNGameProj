#include "FortAthenaMutator_SkyCap.h"

AFortAthenaMutator_SkyCap::AFortAthenaMutator_SkyCap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->SkyCapClass = NULL;
    this->SkyCap = NULL;
}

void AFortAthenaMutator_SkyCap::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}


