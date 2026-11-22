#include "FortMinigamePlayerStartComponent.h"

UFortMinigamePlayerStartComponent::UFortMinigamePlayerStartComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsCheckpoint = false;
}

void UFortMinigamePlayerStartComponent::StorePlayerCheckpoint(APlayerState* Player) {
}

bool UFortMinigamePlayerStartComponent::HasAnyCheckpointValue() const {
    return false;
}

bool UFortMinigamePlayerStartComponent::GetPlayerCheckpointLastUsedTime(APlayerState* Player, FDateTime& OutTime) const {
    return false;
}


