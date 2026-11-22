#include "OctopusInPersistent.h"

FOctopusInPersistent::FOctopusInPersistent() {
    // Initialize reflected value fields omitted by the dump.
    this->TowhookAimDir = FVector::ZeroVector;
    this->FortOctopusVehicleConfigs = NULL;
    this->BoostForce = 0.00f;
    this->MaxVerticalBoostForce = 0.00f;
    this->BoostSpeedKmh = 0.00f;
}

