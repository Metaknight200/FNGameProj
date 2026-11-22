#include "CachedSupplyDrop.h"

FCachedSupplyDrop::FCachedSupplyDrop() {
    // Initialize reflected value fields omitted by the dump.
    this->LastLocation = FVector::ZeroVector;
    this->supplydrop = NULL;
    this->bInOctree = false;
}

