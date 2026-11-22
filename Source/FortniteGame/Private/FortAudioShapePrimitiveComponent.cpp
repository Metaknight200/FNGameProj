#include "FortAudioShapePrimitiveComponent.h"

UFortAudioShapePrimitiveComponent::UFortAudioShapePrimitiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SoundOnEdge = NULL;
    this->SoundOnInside = NULL;
}

bool UFortAudioShapePrimitiveComponent::GetIsPlayerInside() const {
    return false;
}

UAudioComponent* UFortAudioShapePrimitiveComponent::GetInsideAudioComponent() {
    return NULL;
}

UAudioComponent* UFortAudioShapePrimitiveComponent::GetEdgeAudioComponent() {
    return NULL;
}


