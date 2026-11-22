#include "OstrichWeapon_RetainedData.h"

FOstrichWeapon_RetainedData::FOstrichWeapon_RetainedData() {
    this->LoadedShotgunAmmo = 0;
    this->RocketsCooldownElapsed = 0.00f;
    this->bHasPrevious = false;
}

