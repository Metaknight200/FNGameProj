#include "SpecialEventInputHelperComponent.h"

USpecialEventInputHelperComponent::USpecialEventInputHelperComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBlockInput = false;
    this->bConsumeMoveInput = true;
    this->bConsumeLookInput = true;
    this->InputComp = NULL;
}

void USpecialEventInputHelperComponent::PushInputComponent() {
}

void USpecialEventInputHelperComponent::PopInputComponent() {
}


