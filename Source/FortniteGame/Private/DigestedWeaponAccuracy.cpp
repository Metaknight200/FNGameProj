#include "DigestedWeaponAccuracy.h"

FDigestedWeaponAccuracy::FDigestedWeaponAccuracy() {
    this->IdealAttackRange = 0.00f;
    this->TargetingIdealAttackRange = 0.00f;
    this->MaxAttackRange = 0.00f;
    this->ChanceToAimAtTargetsFeet = 0.00f;
    this->bKeepAimingOnSameSideWhileFiring = false;
    this->MaxTrackingHeightOffsetError = 0.00f;
    this->MinRotationInterpSpeed = 0.00f;
    this->MaxRotationInterpSpeed = 0.00f;
}

