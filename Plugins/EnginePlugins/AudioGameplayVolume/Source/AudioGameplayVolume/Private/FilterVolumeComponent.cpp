#include "FilterVolumeComponent.h"

UFilterVolumeComponent::UFilterVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ExteriorLPF = 20000.00f;
    this->ExteriorLPFTime = 0.50f;
    this->InteriorLPF = 20000.00f;
    this->InteriorLPFTime = 0.50f;
}

void UFilterVolumeComponent::SetInteriorLPF(float Volume, float InterpolateTime) {
}

void UFilterVolumeComponent::SetExteriorLPF(float Volume, float InterpolateTime) {
}


