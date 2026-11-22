#include "PlayspaceSpawnActor.h"
#include "Components/SceneComponent.h"

APlayspaceSpawnActor::APlayspaceSpawnActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
}


