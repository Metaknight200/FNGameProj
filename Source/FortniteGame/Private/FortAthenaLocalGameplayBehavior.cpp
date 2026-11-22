#include "FortAthenaLocalGameplayBehavior.h"
#include "Components/SceneComponent.h"

AFortAthenaLocalGameplayBehavior::AFortAthenaLocalGameplayBehavior(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->bNeedToAwakeDuringExecution = false;
    this->CachedTask = NULL;
}



void AFortAthenaLocalGameplayBehavior::FinishExecute() {
}


