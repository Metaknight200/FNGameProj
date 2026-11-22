#include "FortAnimInput_SpeedWarping.h"

FFortAnimInput_SpeedWarping::FFortAnimInput_SpeedWarping() {
    // Initialize reflected value fields omitted by the dump.
    this->SpeedWarpingLimits = FVector2D::ZeroVector;
    this->SpeedWarpingLimitsAddlRateScale = FVector2D::ZeroVector;
    this->PlayRateAdjustmentCurve = NULL;
    this->SpeedWarpingAmount = 0.00f;
    this->PlayRate = 0.00f;
}

