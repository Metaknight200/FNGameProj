#include "FortItemLayerAnimInstance_FullLocomotion.h"

UFortItemLayerAnimInstance_FullLocomotion::UFortItemLayerAnimInstance_FullLocomotion() {
    this->LocalVelocityYawAngle = 0.00f;
    this->LocalVelocityYawAngleMinusMeleeTwist = 0.00f;
    this->LocalVelocityYawAngleMinusJogBlendSpaceRotation = 0.00f;
    this->StartAnimDeltaAngleNorth = 0.00f;
    this->StartAnimDeltaAngleEast = 0.00f;
    this->StartAnimDeltaAngleSouth = 0.00f;
    this->StartAnimDeltaAngleWest = 0.00f;
    this->SpeedAdjustedPlayrate = 0.00f;
    this->LocomotionCardinalDirection = EFortCardinalDirection::North;
    this->StopCardinalDirection = EFortCardinalDirection::North;
    this->PrePivotCardinalDirection = EFortCardinalDirection::North;
    this->PostPivotCardinalDirection = EFortCardinalDirection::North;
    this->bIsSprinting = false;
}


