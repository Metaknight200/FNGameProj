#include "RotationLerpData.h"

FRotationLerpData::FRotationLerpData() {
    // Initialize reflected value fields omitted by the dump.
    this->RotationLerp_End = FQuat::Identity;
    this->RotationLerp_Start = FQuat::Identity;
    this->RotationLerp_Target = FQuat::Identity;
    this->TotalLerpTime = 0.00f;
}

