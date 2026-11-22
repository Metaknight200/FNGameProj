#include "FortWaterInteractionComponent.h"

UFortWaterInteractionComponent::UFortWaterInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEnabled = true;
    this->bTickComponentForces = true;
    this->bIncludeWaves = true;
    this->bAllowCachedDataInLargeBodies = true;
    this->WaterVelocityForceMultiplier = 1.50f;
    this->WaterVelocityShallowDepth = 150.00f;
    this->WaterVelocityShallowMultiplier = 0.33f;
    this->WaterVelocityShoreBias = 0.05f;
    this->BuoyancyFactor = 1.50f;
    this->UpBuoyancyDrag = 3.00f;
    this->UpBuoyancyDrag2 = 0.30f;
    this->DownBuoyancyDrag = 3.00f;
    this->DownBuoyancyDrag2 = 0.20f;
    this->HorizontalDrag = 1.00f;
    this->HorizontalDrag2 = 0.10f;
}



bool UFortWaterInteractionComponent::IsInWater() const {
    return false;
}

bool UFortWaterInteractionComponent::IsEnabled() const {
    return false;
}

void UFortWaterInteractionComponent::GetLastWaterSurfaceInfo(FVector& WaterPlaneLocation, FVector& WaterPlaneNormal, FVector& WaterSurfacePosition, float& WaterDepth, int32& WaterBodyIdx, FVector& WaterVelocity) {
}

AFortWaterBodyActor* UFortWaterInteractionComponent::GetCurrentWaterBody() const {
    return NULL;
}


