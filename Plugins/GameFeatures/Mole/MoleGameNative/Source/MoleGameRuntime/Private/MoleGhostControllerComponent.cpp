#include "MoleGhostControllerComponent.h"

UMoleGhostControllerComponent::UMoleGhostControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GhostInputComp = NULL;
}


void UMoleGhostControllerComponent::CLientSetupGhost_Implementation() {
}

void UMoleGhostControllerComponent::ClientRevertGhost_Implementation() {
}


