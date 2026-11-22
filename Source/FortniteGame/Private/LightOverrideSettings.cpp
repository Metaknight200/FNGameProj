#include "LightOverrideSettings.h"

FLightOverrideSettings::FLightOverrideSettings() {
    this->OverrideLevel = FLightOverrideLevel::Default;
    this->Intensity = 0.00f;
    this->AttenuationRadius = 0.00f;
    this->CastsShadows = false;
    this->UseInverseSquaredFalloff = false;
    this->LightFalloffExponent = 0.00f;
    this->ShadowResolutionScale = 0.00f;
    this->ShadowBias = 0.00f;
}

