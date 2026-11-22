#include "FortCinematicComponent.h"

UFortCinematicComponent::UFortCinematicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortCinematicComponent::RemoveCinematicState(const FGameplayTag& StateId) {
}

void UFortCinematicComponent::PushCinematicState(const FFortCinematicState& InState) {
}

bool UFortCinematicComponent::IsCinematicStateActive(const FGameplayTag& StateTag) {
    return false;
}

void UFortCinematicComponent::FadeToBlackscreen(float InFadeTime, bool bInHold) {
}

void UFortCinematicComponent::FadeFromBlackscreen(float InFadeTime) {
}

void UFortCinematicComponent::CancelBlackscreen() {
}


