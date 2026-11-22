#include "FortLiveSpectatorController.h"
#include "ESpectatorCameraType.h"

AFortLiveSpectatorController::AFortLiveSpectatorController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CurrentCameraType = ESpectatorCameraType::Gameplay;
    this->CameraModeCycle.AddDefaulted(5);
    this->SavedCameraStates.AddDefaulted(9);
    this->FollowedPlayerState = NULL;
}

void AFortLiveSpectatorController::ServerSetFollowedPlayer_Implementation(AFortPlayerState* NewPlayerToFollow, const FVector& SpectatorLocation, bool bValidPos) {
}
bool AFortLiveSpectatorController::ServerSetFollowedPlayer_Validate(AFortPlayerState* NewPlayerToFollow, const FVector& SpectatorLocation, bool bValidPos) {
    return true;
}


