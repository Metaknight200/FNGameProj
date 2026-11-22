#include "FortGameplayAttributeData.h"

FFortGameplayAttributeData::FFortGameplayAttributeData() {
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->bIsCurrentClamped = false;
    this->bIsBaseClamped = false;
    this->bShouldClampBase = false;
    this->UnclampedBaseValue = 0.00f;
    this->UnclampedCurrentValue = 0.00f;
}

