#include "FortTracerBase.h"
#include "Components/StaticMeshComponent.h"
#include "MovementComp_Tracer.h"

AFortTracerBase::AFortTracerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TracerMesh0"));
    this->TracerMovementComponent = CreateDefaultSubobject<UMovementComp_Tracer>(TEXT("TracerComp0"));
    this->TracerMesh = (UStaticMeshComponent*)RootComponent;
    this->BulletWhipTrackerComponent = NULL;
    this->SpeedScaleMinRange = 2048.00f;
    this->SpeedScaleMaxRange = 5000.00f;
    this->SpeedScaleMinMultiplier = 1.00f;
    this->SpeedScaleMaxMultiplier = 1.50f;
    this->MeshScaleTime = 10.00f;
    this->BulletWhipTrackerComponentClass = NULL;
    this->bScaleOnDeath = true;
    this->bScaleSpeed = true;
    this->bScaledUp = false;
    this->bDead = false;
    this->bOwnedByPool = false;
    this->currentScale = 0.00f;
}

void AFortTracerBase::Init(const FVector& Start, const FVector& End) {
}


