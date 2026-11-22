#include "BuildingTrapCeiling_Falling.h"
#include "Components/StaticMeshComponent.h"

ABuildingTrapCeiling_Falling::ABuildingTrapCeiling_Falling(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
    this->VisibleMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visible Mesh Component"));
    this->VisibleMeshComponent->SetupAttachment(RootComponent);
}



