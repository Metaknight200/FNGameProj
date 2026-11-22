#include "FortGameplayCueNotify_Loop.h"
#include "Components/SceneComponent.h"

AFortGameplayCueNotify_Loop::AFortGameplayCueNotify_Loop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bAllowMultipleWhileActiveEvents = false;
    this->bTickEnabled = false;
    this->TickInterval = 0.50f;
    this->TickGroup = TG_PrePhysics;
}














