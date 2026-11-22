#include "FortNavGraphGoal.h"
#include "Components/SceneComponent.h"

AFortNavGraphGoal::AFortNavGraphGoal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->GraphRadius = 8000.00f;
}


