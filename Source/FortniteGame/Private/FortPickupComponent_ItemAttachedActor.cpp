#include "FortPickupComponent_ItemAttachedActor.h"

UFortPickupComponent_ItemAttachedActor::UFortPickupComponent_ItemAttachedActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachedActor = NULL;
}

void UFortPickupComponent_ItemAttachedActor::OnPickupPickedUpByPlayer(AFortPickup* SelfActor, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation) {
}

void UFortPickupComponent_ItemAttachedActor::OnAttachedActorDestroyed(AActor* DestroyedActor) {
}

void UFortPickupComponent_ItemAttachedActor::AttachActorToPickup(AFortPickup* PickUp, AActor* ActorToAttach) {
}


