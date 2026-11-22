#include "BuildingTrapFloor_Hoverboard.h"
#include "Components/ArrowComponent.h"

ABuildingTrapFloor_Hoverboard::ABuildingTrapFloor_Hoverboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
    this->DirectionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Direction Arrow"));
    this->PushAmount = 3200.00f;
    this->DirectionArrow->SetupAttachment(RootComponent);
}


