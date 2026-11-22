#include "TeamPlacementWidget.h"
#include "FortAthenaMutator_TeamPlacement.h"

UTeamPlacementWidget::UTeamPlacementWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_TeamPlacement::StaticClass();
}


void UTeamPlacementWidget::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}


