#include "ReplicatedPhysicsPawnState.h"

FReplicatedPhysicsPawnState::FReplicatedPhysicsPawnState() {
    // Initialize reflected value fields omitted by the dump.
    this->Rotation = FQuat::Identity;
    this->SyncKey = 0;
}

