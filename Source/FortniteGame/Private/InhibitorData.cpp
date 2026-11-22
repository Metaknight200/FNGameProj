#include "InhibitorData.h"

FInhibitorData::FInhibitorData() {
    // Initialize reflected value fields omitted by the dump.
    this->LastModifiedDate = FDateTime(0);
    this->VolumeScaledExtent = FVector::ZeroVector;
    this->Inhibitor = NULL;
    this->bIsVolumeInhibitor = false;
}

