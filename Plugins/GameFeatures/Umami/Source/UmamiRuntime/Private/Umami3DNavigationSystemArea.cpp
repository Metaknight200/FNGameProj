#include "Umami3DNavigationSystemArea.h"
#include "Components/SceneComponent.h"

AUmami3DNavigationSystemArea::AUmami3DNavigationSystemArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}


