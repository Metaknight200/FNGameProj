#include "FortPlacementActor.h"
#include "Components/SceneComponent.h"
#include "EBuildingActorComponentCreationPolicy.h"

AFortPlacementActor::AFortPlacementActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->AbilitySystemComponentCreationPolicy = EBuildingActorComponentCreationPolicy::Lazy;
}


