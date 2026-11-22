#include "FortBounceData.h"

FFortBounceData::FFortBounceData() {
    // Initialize reflected value fields omitted by the dump.
    this->DeformationCenter = FLinearColor::Transparent;
    this->DeformationVector = FLinearColor::Transparent;
    this->StartTime = 0.00f;
    this->BounceValue = 0.00f;
    this->Radius = 0.00f;
    this->BounceType = EFortBounceType::Hit;
    this->bLocalInstigator = false;
    this->bIsPlaying = false;
}

