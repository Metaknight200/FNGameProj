#include "CobaltGamePhaseWidgetBase.h"

UCobaltGamePhaseWidgetBase::UCobaltGamePhaseWidgetBase() {
    this->StormComingWarningTime = 0.00f;
}


void UCobaltGamePhaseWidgetBase::OnGameStateSet(AFortGameState* InGameState) {
}


void UCobaltGamePhaseWidgetBase::HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void UCobaltGamePhaseWidgetBase::HandleCountdownUpdate(int32 TimeRemaining) {
}


