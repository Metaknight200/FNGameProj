#include "FortItemLayerAnimInstance_GalileoPatrol.h"

UFortItemLayerAnimInstance_GalileoPatrol::UFortItemLayerAnimInstance_GalileoPatrol() {
    this->WalkAdditiveStartOffset = 0.00f;
    this->bRecentlyFired = false;
    this->bIsLandPatrolling = false;
    this->bIdle_Walk_Transition = false;
    this->bIsPatrolLocomotionCurrentTimeAboveThreshold = false;
}


