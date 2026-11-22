#include "FortStormShieldCameraActor.h"

AFortStormShieldCameraActor::AFortStormShieldCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowReceiveTickEventOnDedicatedServer = false;
    this->CameraTurnSpeed = 0.00f;
    this->CameraOffsetForward = 0.00f;
    this->CameraOffsetZ = 0.00f;
}


