#include "FortAnimInput_SkydivingExternalForce.h"

FFortAnimInput_SkydivingExternalForce::FFortAnimInput_SkydivingExternalForce() {
    // Initialize reflected value fields omitted by the dump.
    this->DivingAdditive = FVector::ZeroVector;
    this->DivingMultiplier = FVector::ZeroVector;
    this->FloatingAdditive = FVector::ZeroVector;
    this->FloatingMultiplier = FVector::ZeroVector;
    this->HeadToPelvisDirection = FVector::ZeroVector;
    this->ParachutingAdditive = FVector::ZeroVector;
    this->ParachutingMultiplier = FVector::ZeroVector;
    this->SkydivingVectorForce = FVector::ZeroVector;
    this->bUseSkydivingVectorForce = false;
    this->bUseNoisyClothGravity = false;
    this->bApplyNoiseInActorSpace = false;
    this->PerlinRangedOutMinX = 0.00f;
    this->PerlinRangedOutMaxX = 0.00f;
    this->PerlinRangedOutMinY = 0.00f;
    this->PerlinRangedOutMaxY = 0.00f;
    this->PerlinRangedOutMinZ = 0.00f;
    this->PerlinRangedOutMaxZ = 0.00f;
}

