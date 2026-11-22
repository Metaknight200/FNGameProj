#include "FortPathFollowingComponent.h"

UFortPathFollowingComponent::UFortPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyAI = NULL;
    this->MovementBlockFrustrationCooldownSpeed = 1.40f;
}


