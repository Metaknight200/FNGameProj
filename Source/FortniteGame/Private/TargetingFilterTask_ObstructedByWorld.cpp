#include "TargetingFilterTask_ObstructedByWorld.h"

UTargetingFilterTask_ObstructedByWorld::UTargetingFilterTask_ObstructedByWorld() {
    this->bComplexTrace = false;
    this->bExcludeAllAttachedToTarget = true;
    this->bExcludeInstigator = false;
    this->bExcludeAllAttachedToInstigator = false;
    this->bExcludeAthenaVehicleOfInstigator = false;
    this->bExcludeAllAttachedToSource = false;
    this->bExcludeAthenaVehicleOfSource = false;
    this->bExcludeAthenaVehicleFromObstructionChecks = false;
}

FVector UTargetingFilterTask_ObstructedByWorld::GetSourceLocation_Implementation(const FTargetingRequestHandle& TargetingHandle) const {
    return FVector{};
}


