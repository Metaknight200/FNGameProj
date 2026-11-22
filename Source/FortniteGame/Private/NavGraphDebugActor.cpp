#include "NavGraphDebugActor.h"
#include "Components/SceneComponent.h"

ANavGraphDebugActor::ANavGraphDebugActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}


