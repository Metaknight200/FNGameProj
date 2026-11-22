#include "FortPluginActorSpawner.h"
#include "Components/SceneComponent.h"

AFortPluginActorSpawner::AFortPluginActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bWaitForPlaylistLoad = true;
}


