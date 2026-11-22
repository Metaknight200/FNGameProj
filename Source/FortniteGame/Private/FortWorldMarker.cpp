#include "FortWorldMarker.h"

UFortWorldMarker::UFortWorldMarker() {
    this->MarkerComponent = NULL;
    this->MarkerActor = NULL;
    this->MarkerWidget = NULL;
}

void UFortWorldMarker::PlayerStateDestroyed(AActor* DestroyedActor) {
}

void UFortWorldMarker::PickedUp(AFortPickup* SelfActor, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation) {
}

void UFortWorldMarker::ActorDestroyed(AActor* DestroyedActor) {
}


