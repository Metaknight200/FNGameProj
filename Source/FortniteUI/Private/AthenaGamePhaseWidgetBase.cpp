#include "AthenaGamePhaseWidgetBase.h"

UAthenaGamePhaseWidgetBase::UAthenaGamePhaseWidgetBase() {
    this->StormComingFontMaterial = NULL;
    this->StormComingWarningTime = 0.00f;
    this->TimeText = NULL;
}

void UAthenaGamePhaseWidgetBase::OnGameStateSet(AFortGameState* InGameState) {
}


void UAthenaGamePhaseWidgetBase::HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void UAthenaGamePhaseWidgetBase::HandleCountdownUpdate(int32 TimeRemaining) {
}


