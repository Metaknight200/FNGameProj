#include "FortCollisionResponseSwapperComponent.h"

UFortCollisionResponseSwapperComponent::UFortCollisionResponseSwapperComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionPrimitiveComponent = NULL;
    this->OverlapPrimitiveComponent = NULL;
    this->NewCollisionResponse = ECR_Ignore;
}

void UFortCollisionResponseSwapperComponent::UnregisterCallbacksForOverlap() {
}

void UFortCollisionResponseSwapperComponent::RestoreCollisionResponses() {
}

void UFortCollisionResponseSwapperComponent::RegisterCallbacksForOverlap(UPrimitiveComponent* InCollisionPrimitiveComponent, UPrimitiveComponent* InOverlapPrimitiveComponent) {
}

void UFortCollisionResponseSwapperComponent::HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UFortCollisionResponseSwapperComponent::HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


