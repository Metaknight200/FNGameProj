#include "InteractionTypeContext.h"

UInteractionTypeContext::UInteractionTypeContext() {
}

TEnumAsByte<TInteractionType> UInteractionTypeContext::GetInteractionType() const {
    return IT_NoInteraction;
}


