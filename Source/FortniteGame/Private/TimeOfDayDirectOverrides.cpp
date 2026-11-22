#include "TimeOfDayDirectOverrides.h"

FTimeOfDayDirectOverrides::FTimeOfDayDirectOverrides() {
    // Initialize reflected value fields omitted by the dump.
    this->OverriddenFogColor = FLinearColor::Transparent;
    this->OverriddenLightColor = FLinearColor::Transparent;
    this->OverriddenSkyLightColor = FLinearColor::Transparent;
    this->bOverrideLightIntensity = false;
    this->bOverrideLightColor = false;
    this->bOverrideSkyLightIntensity = false;
    this->bOverrideSkyLightColor = false;
    this->bOverrideFogDensity = false;
    this->bOverrideFogColor = false;
    this->bOverrideFogStartDistance = false;
    this->OverriddenLightIntensity = 0.00f;
    this->OverriddenSkyLightIntensity = 0.00f;
    this->OverriddenFogDensity = 0.00f;
    this->OverriddenFogStartDistance = 0.00f;
    this->OverriddenPostProcessActorClass = NULL;
    this->ReplicationIndex = 0;
}

