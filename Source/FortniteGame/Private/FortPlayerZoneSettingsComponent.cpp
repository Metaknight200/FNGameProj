#include "FortPlayerZoneSettingsComponent.h"

UFortPlayerZoneSettingsComponent::UFortPlayerZoneSettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeOfDayOverride = EAthenaTimeOfDayOverride::NoOverride;
    this->PostProcessOverride = EAthenaTODPostProcess::NoOverride;
    this->LightIntensityOverride = EAthenaLightIntensityOverride::NoOverride;
    this->LightColorOverride = EAthenaTODColor::NoOverride;
    this->FogDensityOverride = EAthenaFogDensityOverride::NoOverride;
    this->FogColorOverride = EAthenaTODColor::NoOverride;
}


