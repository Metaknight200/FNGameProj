#include "FortProjectilePetrol.h"

AFortProjectilePetrol::AFortProjectilePetrol(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FuelAmount = 20.00f;
    this->PetrolTemplate = NULL;
    this->FortSplineGroundPathTemplate = NULL;
    this->bImpacted = false;
    this->MaxLifeSpanOnCollision = 1.00f;
    this->GroundSlopeAngleThreshold = 45.00f;
}


