#include "FortAthenaTutorial_Shoot.h"

AFortAthenaTutorial_Shoot::AFortAthenaTutorial_Shoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShootCameraPoint = NULL;
    this->TargetCounterScreen = NULL;
    this->AmmoCountToTriggerReload = 5;
    this->ShootMarkerAppearDelay = 0.05f;
    this->CameraInSpeed = 0.00f;
    this->CameraInDuration = 0.00f;
    this->CameraWaitTime = 0.00f;
    this->CameraOutSpeed = 0.00f;
    this->CameraOutDuration = 0.00f;
}

void AFortAthenaTutorial_Shoot::OnTargetDestroyed(int32 TargetIndex) {
}



