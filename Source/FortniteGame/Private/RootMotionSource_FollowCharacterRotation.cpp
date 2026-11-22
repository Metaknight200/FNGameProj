#include "RootMotionSource_FollowCharacterRotation.h"

FRootMotionSource_FollowCharacterRotation::FRootMotionSource_FollowCharacterRotation() {
    this->ConstantStrength = 0.00f;
    this->bWasWalkingLastFrame = false;
    this->bWasFallingLastFrame = false;
    this->WalkingAccumulatedTime = 0.00f;
    this->FallingAccumulatedTime = 0.00f;
}

