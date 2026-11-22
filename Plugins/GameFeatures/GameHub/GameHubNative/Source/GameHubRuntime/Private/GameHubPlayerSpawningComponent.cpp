#include "GameHubPlayerSpawningComponent.h"

UGameHubPlayerSpawningComponent::UGameHubPlayerSpawningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bQueueUserForSpawnWhenAdded = true;
}


