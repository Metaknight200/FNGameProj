#include "FortAudioShapeComponent.h"

UFortAudioShapeComponent::UFortAudioShapeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->UpdateFrequencyInaudible = 3.00f;
    this->UpdateFrequencyAudible = 0.20f;
    this->MaxDistanceOffset = 1000.00f;
    this->SmoothingDistance = 512.00f;
}

void UFortAudioShapeComponent::UpdateAudioShape(TArray<TWeakObjectPtr<APlayerController>>& InLocalControllers) {
}

void UFortAudioShapeComponent::Enable() {
}

void UFortAudioShapeComponent::Disable(float FadeTime) {
}


