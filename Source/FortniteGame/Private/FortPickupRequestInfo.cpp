#include "FortPickupRequestInfo.h"

FFortPickupRequestInfo::FFortPickupRequestInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->Direction = FVector::ZeroVector;
    this->FlyTime = 0.00f;
    this->bPlayPickupSound = false;
    this->bIsAutoPickup = false;
    this->bUseRequestedSwap = false;
    this->bTrySwapWithWeapon = false;
    this->bIsVisualOnlyPickup = false;
}

