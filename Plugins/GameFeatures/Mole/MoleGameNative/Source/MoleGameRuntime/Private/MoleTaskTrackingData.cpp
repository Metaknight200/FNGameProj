#include "MoleTaskTrackingData.h"

FMoleTaskTrackingData::FMoleTaskTrackingData() {
    this->TaskAsset = NULL;
    this->DistributionCountRemaining = 0;
    this->bInUse = false;
    this->bHasBeenGrantedBefore = false;
}

