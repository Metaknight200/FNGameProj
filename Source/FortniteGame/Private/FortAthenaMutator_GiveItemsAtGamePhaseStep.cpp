#include "FortAthenaMutator_GiveItemsAtGamePhaseStep.h"

AFortAthenaMutator_GiveItemsAtGamePhaseStep::AFortAthenaMutator_GiveItemsAtGamePhaseStep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhaseToGiveItems = EAthenaGamePhaseStep::BusFlying;
}

void AFortAthenaMutator_GiveItemsAtGamePhaseStep::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}


