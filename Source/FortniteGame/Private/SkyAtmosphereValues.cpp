#include "SkyAtmosphereValues.h"

FSkyAtmosphereValues::FSkyAtmosphereValues() {
    // Initialize reflected value fields omitted by the dump.
    this->MieAbsorption = FLinearColor::Transparent;
    this->MieScattering = FLinearColor::Transparent;
    this->OtherAbsorption = FLinearColor::Transparent;
    this->RayleighScattering = FLinearColor::Transparent;
    this->SkyLuminanceFactor = FLinearColor::Transparent;
    this->RayleighScatteringScale = 0.00f;
    this->RayleighExponentialDistribution = 0.00f;
    this->MieScatteringScale = 0.00f;
    this->MieAbsorptionScale = 0.00f;
    this->MieAnisotropy = 0.00f;
    this->MieExponentialDistribution = 0.00f;
    this->OtherAbsorptionScale = 0.00f;
    this->AerialPespectiveViewDistanceScale = 0.00f;
    this->HeightFogContribution = 0.00f;
}

