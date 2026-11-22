#include "RuntimeBoostInfo.h"

FRuntimeBoostInfo::FRuntimeBoostInfo() {
    this->bCanBoost = false;
    this->bUsesRechargeableBoost = false;
    this->BoostPushForce = 0.00f;
    this->BoostTopSpeedForceMultiplier = 0.00f;
    this->BoostTopSpeedMultiplier = 0.00f;
    this->RechargeableBoostRateOfRegen = 0.00f;
    this->RechargeableBoostRateOfUse = 0.00f;
}

