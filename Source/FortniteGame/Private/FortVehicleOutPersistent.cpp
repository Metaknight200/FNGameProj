#include "FortVehicleOutPersistent.h"

FFortVehicleOutPersistent::FFortVehicleOutPersistent() {
    this->bCanDriveOnIncline = false;
    this->bWheelsOnGround = false;
    this->bAnyWheelsOnGround = false;
    this->bIsTouchingDrivableGround = false;
    this->bIsAsyncCorrectingOrientation = false;
    this->bIsTouchingGroundWithoutWheels = false;
}

