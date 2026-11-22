#include "FortItemLayerAnimInstance_ChargedWeapon.h"

UFortItemLayerAnimInstance_ChargedWeapon::UFortItemLayerAnimInstance_ChargedWeapon() {
    this->ChargeSpeedModifierCurve = NULL;
    this->WeaponChargeLoop = NULL;
    this->ChargeAlpha = 0.00f;
    this->ChargeBlendInTime = 0.55f;
    this->bWeaponIsCharging = false;
    this->bWeaponIsAtMaxCharge = false;
}


