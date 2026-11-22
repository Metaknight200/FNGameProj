#include "DigestedFocusSetting.h"

FDigestedFocusSetting::FDigestedFocusSetting() {
    this->bRequireAmmoToMatch = false;
    this->IgnoreThreatTimeWhenNotAttacking = 0.00f;
    this->IgnoreThreatDeviationWhenNotAttacking = 0.00f;
    this->IgnoreThreatDuration = 0.00f;
    this->IgnoreThreatDurationDeviation = 0.00f;
}

