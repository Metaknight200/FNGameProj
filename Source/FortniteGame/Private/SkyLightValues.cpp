#include "SkyLightValues.h"

FSkyLightValues::FSkyLightValues() {
    // Initialize reflected value fields omitted by the dump.
    this->SkyLightColor = FLinearColor::Transparent;
    this->SkyLightOcclusionTint = FLinearColor::Transparent;
    this->SkyLightMinOcclusion = 0.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->Cubemap = NULL;
    this->DestinationCubemap = NULL;
}

