#include "FortGliderAudioComponent.h"

UFortGliderAudioComponent::UFortGliderAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugIgnoreFullyDeployed = false;
    this->PlayerParachute = NULL;
}

void UFortGliderAudioComponent::UpdateGliderAudio(float ForwardDot, float RightDot) {
}

bool UFortGliderAudioComponent::IsParachuteFullyDeployed() const {
    return false;
}


