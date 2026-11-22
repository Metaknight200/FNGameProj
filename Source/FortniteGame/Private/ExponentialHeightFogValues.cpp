#include "ExponentialHeightFogValues.h"

FExponentialHeightFogValues::FExponentialHeightFogValues() {
    // Initialize reflected value fields omitted by the dump.
    this->DirectionalInscatteringColor = FLinearColor::Transparent;
    this->FogInscatteringColor = FLinearColor::Transparent;
    this->VolumetricFogAlbedo = FLinearColor::Transparent;
    this->FogDensity = 0.00f;
    this->FogHeightFalloff = 0.00f;
    this->FogMaxOpacity = 0.00f;
    this->StartDistance = 0.00f;
    this->DirectionalInscatteringExponent = 0.00f;
    this->DirectionalInscatteringStartDistance = 0.00f;
    this->VolumetricFogScatteringDistribution = 0.00f;
    this->VolumetricFogExtinctionScale = 0.00f;
    this->VolumetricFogDistance = 0.00f;
}

