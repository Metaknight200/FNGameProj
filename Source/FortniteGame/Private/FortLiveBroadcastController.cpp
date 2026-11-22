#include "FortLiveBroadcastController.h"

AFortLiveBroadcastController::AFortLiveBroadcastController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CameraModeCycle.AddDefaulted(5);
    this->SavedCameraStates.AddDefaulted(9);
    this->BroadcastPostProcessingActorClass = NULL;
    this->SquadMarkerActorClass = NULL;
}

void AFortLiveBroadcastController::TryBeginBusPhase() {
}

void AFortLiveBroadcastController::ServerOnSpectatorCameraTypeChanged_Implementation(ESpectatorCameraType NewCameraMode, const FVector& SpectatorLocation, bool bValidPos) {
}
bool AFortLiveBroadcastController::ServerOnSpectatorCameraTypeChanged_Validate(ESpectatorCameraType NewCameraMode, const FVector& SpectatorLocation, bool bValidPos) {
    return true;
}

void AFortLiveBroadcastController::ServerBeginBusPhase_Implementation() {
}
bool AFortLiveBroadcastController::ServerBeginBusPhase_Validate() {
    return true;
}

void AFortLiveBroadcastController::ClientHideBusButton_Implementation() {
}

bool AFortLiveBroadcastController::CanStartBattleBus() {
    return false;
}


