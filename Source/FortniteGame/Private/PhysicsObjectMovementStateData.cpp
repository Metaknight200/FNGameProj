#include "PhysicsObjectMovementStateData.h"

FPhysicsObjectMovementStateData::FPhysicsObjectMovementStateData() {
    this->MovementState = EFortPhysicsObjectMovementState::None;
    this->PreviousMovementState = EFortPhysicsObjectMovementState::None;
    this->TimeMovementStateUpdated = 0.00f;
    this->MovingStopTime = 0.00f;
}

