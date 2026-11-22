#include "CachedRechargeAmmoData.h"

FCachedRechargeAmmoData::FCachedRechargeAmmoData() {
    this->ServerStartTime = 0.00f;
    this->ChargeRate = 0.00f;
    this->AmountToRecharge = 0;
    this->ItemLevel = 0;
    this->bShouldRechargeAmmoToClip = false;
}

