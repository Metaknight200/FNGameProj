#include "FortProjectileTrajectory.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AFortProjectileTrajectory::AFortProjectileTrajectory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AFortProjectileTrajectory::SetTrajectorySpline_Implementation(const TArray<FVector>& SplinePoints, const TArray<FVector>& SplineTangents) {
}


