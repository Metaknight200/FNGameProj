#include "FortGameplayTagBuildingActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AFortGameplayTagBuildingActor::AFortGameplayTagBuildingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->XGridCells = 1;
    this->YGridCells = 1;
    this->ZGridCells = 1;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->BoxComponent->SetupAttachment(RootComponent);
}


