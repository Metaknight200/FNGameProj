#include "GliderThrustData.h"

FGliderThrustData::FGliderThrustData() {
    // Initialize reflected value fields omitted by the dump.
    this->PitchOutput = FVector2D::ZeroVector;
    this->VolumeOutput = FVector2D::ZeroVector;
    this->Sound = NULL;
}

