#include "FortMovementComp_CharacterAthena.h"

UFortMovementComp_CharacterAthena::UFortMovementComp_CharacterAthena(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableServerDualMoveScopedMovementUpdates = true;
    this->JumpPenalties.AddDefaulted(5);
    this->JumpPenaltyResetTime = 1.00f;
    this->NetworkSkipSkyDivingCollisionForPawnLOD = 2;
    this->MaxAccelerationFlying = 1000.00f;
}


