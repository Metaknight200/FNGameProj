#include "FortPickupInteractOverrideComponent.h"

UFortPickupInteractOverrideComponent::UFortPickupInteractOverrideComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Priority = 0;
    this->ContextOverrideWidget = NULL;
    this->SecondContextOverrideWidget = NULL;
    this->bContextOverrideWidgetApplied = false;
}

int32 UFortPickupInteractOverrideComponent::GetPriority() const {
    return 0;
}


