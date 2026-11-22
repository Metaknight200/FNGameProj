#include "FortPlayerAnimInstance_OstrichDriver.h"

UFortPlayerAnimInstance_OstrichDriver::UFortPlayerAnimInstance_OstrichDriver() {
    this->BouncePlayRateValue = 0.00f;
    this->LegsBounceAlphaValue = 0.00f;
    this->LegsBounceAlphaWhenSkytubing = 0.20f;
    this->LegsBounceAlphaNoSkytubing = 1.00f;
    this->LegsBounceAlphaInterpSpeed = 5.00f;
    this->bIsSkyTubing = false;
    this->bIsMechMoving2D = false;
}


