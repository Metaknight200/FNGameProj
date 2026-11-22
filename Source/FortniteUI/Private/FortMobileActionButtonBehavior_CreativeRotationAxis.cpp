#include "FortMobileActionButtonBehavior_CreativeRotationAxis.h"

UFortMobileActionButtonBehavior_CreativeRotationAxis::UFortMobileActionButtonBehavior_CreativeRotationAxis() {
    this->RotateXAxisSprite = NULL;
    this->RotateYAxisSprite = NULL;
    this->RotateZAxisSprite = NULL;
}

void UFortMobileActionButtonBehavior_CreativeRotationAxis::HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon) {
}

void UFortMobileActionButtonBehavior_CreativeRotationAxis::HandleMoveToolRotationAxisChanged(uint8 AxisIndex) {
}


