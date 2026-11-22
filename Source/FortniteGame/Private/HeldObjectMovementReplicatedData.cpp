#include "HeldObjectMovementReplicatedData.h"

FHeldObjectMovementReplicatedData::FHeldObjectMovementReplicatedData() {
    // Initialize reflected value fields omitted by the dump.
    this->DetachLocation = FVector::ZeroVector;
    this->DetachRotation = FRotator::ZeroRotator;
    this->MovementVelocity = FVector::ZeroVector;
    this->RepIncrement = 0;
}

