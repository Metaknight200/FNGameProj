#include "FortHoverDroneCameraComponent.h"

UFortHoverDroneCameraComponent::UFortHoverDroneCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DroneTiltInterpSpeed_Accel = 1.00f;
    this->DroneTiltInterpSpeed_Decel = 2.00f;
}


