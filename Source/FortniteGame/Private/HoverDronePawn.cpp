#include "HoverDronePawn.h"
#include "FortHoverDroneCameraComponent.h"
#include "HoverDroneMovementComponent.h"

AHoverDronePawn::AHoverDronePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHoverDroneMovementComponent>(TEXT("MovementComponent0")).SetDefaultSubobjectClass<UFortHoverDroneCameraComponent>(TEXT("SpectatorCameraComponent0"))) {
    this->HoverMoveComponent = NULL;
    this->SpectatorCameraComponent->SetupAttachment(RootComponent);
}

bool AHoverDronePawn::IsMaintainingConstantAltitude() const {
    return false;
}

float AHoverDronePawn::GetAltitude() const {
    return 0.0f;
}


