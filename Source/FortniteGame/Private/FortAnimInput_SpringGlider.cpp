#include "FortAnimInput_SpringGlider.h"

FFortAnimInput_SpringGlider::FFortAnimInput_SpringGlider() {
    // Initialize reflected value fields omitted by the dump.
    this->GliderOffsetLocation = FVector::ZeroVector;
    this->GliderOffsetRotationLeftLeg = FRotator::ZeroRotator;
    this->GliderOffsetRotationRightLeg = FRotator::ZeroRotator;
    this->GliderOffsetRotator = FRotator::ZeroRotator;
    this->GliderYOffsetRotationRightLeg = 0.00f;
    this->GliderYOffsetRotationLeftLeg = 0.00f;
    this->GliderXOffsetRotationRightLeg = 0.00f;
    this->GliderXOffsetRotationLeftLeg = 0.00f;
    this->GliderZOffset = 0.00f;
    this->GliderXOffset = 0.00f;
    this->GliderYOffset = 0.00f;
}

