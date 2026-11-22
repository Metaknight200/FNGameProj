#include "HUDNavArrow.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AHUDNavArrow::AHUDNavArrow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ScaleCurve = NULL;
    this->ArrowComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArrowSMC"));
    this->ArrowComponent->SetupAttachment(RootComponent);
}

void AHUDNavArrow::SetDepartRadius(const float InDepartRadius) {
}

void AHUDNavArrow::SetApproachRadius(const float InApproachRadius) {
}

void AHUDNavArrow::InitializeTrackerComponent(UDestinationTrackerPawnComponent* InDestinationComponent) {
}


