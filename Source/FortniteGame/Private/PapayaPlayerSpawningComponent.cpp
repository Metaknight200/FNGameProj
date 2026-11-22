#include "PapayaPlayerSpawningComponent.h"

UPapayaPlayerSpawningComponent::UPapayaPlayerSpawningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bQueueUserForSpawnWhenAdded = true;
}


