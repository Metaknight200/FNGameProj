#include "FortSplineAudioComponent.h"

UFortSplineAudioComponent::UFortSplineAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClosestPointSound = NULL;
    this->Spline = NULL;
}

void UFortSplineAudioComponent::SetSpline(USplineComponent* NewSpline) {
}

UAudioComponent* UFortSplineAudioComponent::GetAudioComponent() {
    return NULL;
}


