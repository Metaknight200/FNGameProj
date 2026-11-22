#include "AttenuationVolumeComponent.h"

UAttenuationVolumeComponent::UAttenuationVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ExteriorVolume = 1.00f;
    this->ExteriorTime = 0.50f;
    this->InteriorVolume = 1.00f;
    this->InteriorTime = 0.50f;
}

void UAttenuationVolumeComponent::SetInteriorVolume(float Volume, float InterpolateTime) {
}

void UAttenuationVolumeComponent::SetExteriorVolume(float Volume, float InterpolateTime) {
}


