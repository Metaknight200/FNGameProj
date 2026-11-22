#include "MoleGamePlayerSpawningComponent.h"

UMoleGamePlayerSpawningComponent::UMoleGamePlayerSpawningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bQueueUserForSpawnWhenAdded = true;
}


