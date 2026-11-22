#include "PossessPropInteraction.h"

UPossessPropInteraction::UPossessPropInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UPossessPropInteraction::CanInteract_Implementation() {
    return false;
}


