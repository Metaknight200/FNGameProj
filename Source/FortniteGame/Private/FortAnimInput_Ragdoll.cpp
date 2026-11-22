#include "FortAnimInput_Ragdoll.h"

FFortAnimInput_Ragdoll::FFortAnimInput_Ragdoll() {
    // Initialize reflected value fields omitted by the dump.
    this->Facing = FVector::ZeroVector;
    this->Impact = FVector2D::ZeroVector;
    this->bIsRagdolling = false;
    this->bSliding = false;
    this->bTumbling = false;
    this->bStopped = false;
}

