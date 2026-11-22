#include "FortAudioShapeCylinderComponent.h"

UFortAudioShapeCylinderComponent::UFortAudioShapeCylinderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HalfHeight = 500.00f;
    this->Radius = 1000.00f;
}

void UFortAudioShapeCylinderComponent::SetRadius(float InRadius) {
}

void UFortAudioShapeCylinderComponent::SetHalfHeight(float InHalfHeight) {
}


