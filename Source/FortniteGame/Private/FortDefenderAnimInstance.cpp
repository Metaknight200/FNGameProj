#include "FortDefenderAnimInstance.h"

UFortDefenderAnimInstance::UFortDefenderAnimInstance() {
    this->Gender = EFortCustomGender::Invalid;
    this->bShouldWalkRightFootForward = false;
    this->bIsChargingWeapon = false;
    this->SpeedAdjustedPlayrate = 1.00f;
    this->AuthoredJogSpeed = 365.00f;
    this->AuthoredWalkSpeed = 150.00f;
}


