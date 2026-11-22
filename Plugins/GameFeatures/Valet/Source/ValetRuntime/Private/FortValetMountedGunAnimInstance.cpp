#include "FortValetMountedGunAnimInstance.h"

UFortValetMountedGunAnimInstance::UFortValetMountedGunAnimInstance() {
    this->VehicleActor = NULL;
    this->bIsUsingMountedGun = false;
    this->SeatIndexCached = -1;
    this->AimingYaw = 0.00f;
    this->AimingPitch = 0.00f;
    this->MountedWeapon = NULL;
}


