#include "FortAsyncActorDetectionComponent.h"

UFortAsyncActorDetectionComponent::UFortAsyncActorDetectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->CollisionChannel = ECC_Pawn;
    this->ClassesToConsider.AddDefaulted(1);
    this->TraceLength = 128.00f;
}


