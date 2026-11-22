#include "SmartObjectSlot.h"

FSmartObjectSlot::FSmartObjectSlot() {
    // Initialize reflected value fields omitted by the dump.
    this->Direction = FVector::ZeroVector;
    this->Offset = FVector::ZeroVector;
    this->BehaviorConfig = NULL;
}

