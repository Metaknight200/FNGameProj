#include "FortCreativeItemDropParams.h"

FFortCreativeItemDropParams::FFortCreativeItemDropParams() {
    this->AmountRule = EFortCreativeItemDropAmount::All;
    this->AmountToRemove = 0;
    this->PercentageToRemove = 0.00f;
    this->bSpawnPickups = false;
}

