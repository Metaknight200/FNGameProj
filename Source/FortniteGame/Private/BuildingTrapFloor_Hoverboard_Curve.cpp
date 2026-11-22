#include "BuildingTrapFloor_Hoverboard_Curve.h"
#include "Components/SceneComponent.h"

ABuildingTrapFloor_Hoverboard_Curve::ABuildingTrapFloor_Hoverboard_Curve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
    this->Target = CreateDefaultSubobject<USceneComponent>(TEXT("Target"));
    this->TriggeredEffect = NULL;
    this->Target->SetupAttachment(RootComponent);
}


