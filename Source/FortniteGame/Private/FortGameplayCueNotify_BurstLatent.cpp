#include "FortGameplayCueNotify_BurstLatent.h"
#include "Components/SceneComponent.h"

AFortGameplayCueNotify_BurstLatent::AFortGameplayCueNotify_BurstLatent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MaxBurstLatentLifetime = 5.00f;
}





