#include "ChaserPatrolTurnData.h"

FChaserPatrolTurnData::FChaserPatrolTurnData() {
    // Initialize reflected value fields omitted by the dump.
    this->PatrolTurnEndDirection = FVector::ZeroVector;
    this->PatrolTurnStartDirection = FVector::ZeroVector;
    this->bPatrolTurning = false;
    this->PatrolMoveSpeed = 0.00f;
}

