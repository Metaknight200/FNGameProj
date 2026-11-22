#include "FortPatrolAnimLayer.h"

UFortPatrolAnimLayer::UFortPatrolAnimLayer() {
    this->CurrentSpeedInterpSpeed = 1000.00f;
    this->PatrolForceEnableSpeedThreshold = 150.00f;
    this->WalkAdditiveStartOffset = 0.00f;
    this->Speed2D = 0.00f;
    this->LocalVelocityYawAngle = 0.00f;
    this->DisableIdleDuringWalk = 0.00f;
    this->bRecentlyFired = false;
    this->bIsLandPatrolling = false;
    this->bIdle_Walk_Transition = false;
    this->bIsPatrolLocomotionCurrentTimeAboveThreshold = false;
    this->bIsDBNO = false;
    this->bIsMoving2D = false;
    this->bIsAIPatrolling = false;
    this->bIsStressed = false;
    this->bIsDanceStunned = false;
    this->bEnableFullbodyOverride = false;
}

void UFortPatrolAnimLayer::SetPatrolAnimAsset(UFortPatrolAnimAsset* NewAnimAsset) {
}

UFortPatrolAnimAsset* UFortPatrolAnimLayer::GetPatrolAnimSetFromWeapon(const TArray<FFortPatrolAnimSetWeaponPair>& AnimWeaponPairs, const AFortWeapon* NewWeapon) const {
    return NULL;
}


