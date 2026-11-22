#include "FortReplaySpectatorAthena.h"

AFortReplaySpectatorAthena::AFortReplaySpectatorAthena(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->CameraModeCycle.AddDefaulted(5);
    this->SavedCameraStates.AddDefaulted(9);
    this->PlaybackSpeedLUT.AddDefaulted(7);
}

void AFortReplaySpectatorAthena::SimulateLiveStream(bool bEnable, float UpdateFrequency) {
}


