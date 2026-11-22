#include "ArenaCamPawn.h"
#include "HoverDroneMovementComponent.h"

AArenaCamPawn::AArenaCamPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHoverDroneMovementComponent>(TEXT("MovementComponent0"))) {
    this->CurrArenaCamIdx = 0;
}


