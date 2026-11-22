#include "FortBaseAnimInstance_CageSaddle.h"

UFortBaseAnimInstance_CageSaddle::UFortBaseAnimInstance_CageSaddle() {
    this->AsFortSphericalVehicle = NULL;
    this->bIsOnGround = false;
    this->RemappedPitch = 0.00f;
    this->CurrentRoll = 0.00f;
    this->LockedRoll = 0.00f;
    this->bHeadShouldBend = false;
    this->bFootShouldBend = false;
    this->HeadAlphaInterpSpeed = 10.00f;
}


