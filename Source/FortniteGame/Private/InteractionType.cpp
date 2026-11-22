#include "InteractionType.h"

FInteractionType::FInteractionType() {
    // Initialize reflected value fields omitted by the dump.
    this->InteractPoint = FVector::ZeroVector;
    this->InteractionType = IT_NoInteraction;
    this->InteractionBeingAttempted = FirstInteraction;
}

