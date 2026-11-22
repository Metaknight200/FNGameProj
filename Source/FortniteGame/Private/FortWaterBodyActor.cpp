#include "FortWaterBodyActor.h"
#include "GameFramework/Actor.h"
#include "FortAthenaNavArea_Water.h"

AFortWaterBodyActor::AFortWaterBodyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::NeverUpdate;
    this->bCanAffectNavigation = true;
    this->WaterNavAreaClass = UFortAthenaNavArea_Water::StaticClass();
    this->Generator = NULL;
    this->RiverToLakeTransitionMat = NULL;
    this->RiverToLakeTransitionMID = NULL;
    this->RiverToOceanTransitionMat = NULL;
    this->RiverToOceanTransitionMID = NULL;
    this->OceanHeightOffset = 0.00f;
    this->WaterPriority = 0;
    this->bIsSwamp = false;
}

void AFortWaterBodyActor::SetSwampLocationAndRadius(const FVector& InPosition, float InRadius) {
}




float AFortWaterBodyActor::GetWaterVelocityAtSplineInputKey(float InKey) const {
    return 0.0f;
}

void AFortWaterBodyActor::GetWaterSurfaceInfo(FVector QueryLocation, FVector& WaterPlaneLocation, FVector& WaterPlaneNormal, FVector& WaterSurfacePosition, float& WaterDepth, int32& WaterBodyIdx, FVector& WaterVelocity, bool bIncludeDepth, bool bIncludeWaves) const {
}


