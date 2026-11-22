#include "CustomCharacterPartAnimInstance_ColumbusBody.h"

UCustomCharacterPartAnimInstance_ColumbusBody::UCustomCharacterPartAnimInstance_ColumbusBody() {
    this->ThighRotationRightDynamicsAlpha = 0.00f;
    this->ThighRotationLeftDynamicsAlpha = 0.00f;
    this->ThighRotationRightAlpha = 0.00f;
    this->ThighRotationLeftAlpha = 0.00f;
    this->ClavicleRotationRightAlpha = 0.00f;
    this->ClavicleRotationLeftAlpha = 0.00f;
    this->PickaxeSwingPositionLeftPositiveAlpha = 0.00f;
    this->PickaxeSwingPositionLeftNegativeAlpha = 0.00f;
    this->PickaxeSwingPositionRightPositiveAlpha = 0.00f;
    this->PickaxeSwingPositionRightNegativeAlpha = 0.00f;
    this->ChestArmorDynamicsAlpha = 0.00f;
    this->ChestArmorDynamicsInvAlpha = 0.00f;
    this->ChestArmorDynamicsClavicleLeftInvAlpha = 0.00f;
    this->ChestArmorDynamicsClavicleRightInvAlpha = 0.00f;
    this->CrouchMoveAlpha = 0.00f;
    this->UpperArmLeftSwingAlpha = 0.00f;
    this->SkydivingAlpha = 0.00f;
    this->SpinePositivePitchAlpha = 0.00f;
    this->bChestDynamicsDisableRB = false;
    this->bIsCrouchMoving = false;
    this->bIsAboveLODThreshold = false;
    this->bShouldResetDynamics = true;
}


