#include "DirectionalLightValues.h"

FDirectionalLightValues::FDirectionalLightValues() {
    // Initialize reflected value fields omitted by the dump.
    this->LightColor = FColor(0, 0, 0, 0);
    this->Brightness = 0.00f;
    this->VolumetricScatteringIntensity = 0.00f;
}

