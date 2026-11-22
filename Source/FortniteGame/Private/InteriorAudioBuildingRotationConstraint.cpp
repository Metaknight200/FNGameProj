#include "InteriorAudioBuildingRotationConstraint.h"

FInteriorAudioBuildingRotationConstraint::FInteriorAudioBuildingRotationConstraint() {
    // Initialize reflected value fields omitted by the dump.
    this->DotProductComparisons = FVector::ZeroVector;
    this->StartingOrientation = EInteriorAudioBuildingDefaultRotation::PositiveY;
    this->XScaleFlipRotation = 0.00f;
    this->YScaleFlipRotation = 0.00f;
    this->Quadrant = 0;
}

