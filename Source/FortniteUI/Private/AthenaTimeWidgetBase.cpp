#include "AthenaTimeWidgetBase.h"

UAthenaTimeWidgetBase::UAthenaTimeWidgetBase() {
    this->bIsDisplaying = false;
}

void UAthenaTimeWidgetBase::UpdateTimeText() {
}


void UAthenaTimeWidgetBase::OnTimerWidgetActorUpdated(const AActor* TimerWidgetActor) {
}



void UAthenaTimeWidgetBase::OnMinigameStarted_Implementation() {
}

void UAthenaTimeWidgetBase::OnMinigameEnded_Implementation() {
}

void UAthenaTimeWidgetBase::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void UAthenaTimeWidgetBase::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

bool UAthenaTimeWidgetBase::IsTextStyleValid_Implementation(const FName& DisplayTextStyle) {
    return false;
}

void UAthenaTimeWidgetBase::ClientEnteredVolume(APlayerState* PlayerState, AFortVolume* FortVolume) {
}


