#include "FortResurrectionData.h"

FFortResurrectionData::FFortResurrectionData() {
    // Initialize reflected value fields omitted by the dump.
    this->WorldLocation = FVector::ZeroVector;
    this->bResurrectionChipAvailable = false;
    this->ResurrectionExpirationTime = 0.00f;
    this->ResurrectionExpirationLength = 0.00f;
}

