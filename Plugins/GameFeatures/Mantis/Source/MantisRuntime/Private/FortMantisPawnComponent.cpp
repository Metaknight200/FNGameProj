#include "FortMantisPawnComponent.h"

UFortMantisPawnComponent::UFortMantisPawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MantisData = NULL;
    this->Weapon = NULL;
}

void UFortMantisPawnComponent::OnPostPhysicsRotation(UCharacterMovementComponent* CharMoveComp, float DeltaSeconds) {
}

void UFortMantisPawnComponent::OnCharacterMovementPreUpdate(UCharacterMovementComponent* CharMoveComp, float DeltaSeconds) {
}


