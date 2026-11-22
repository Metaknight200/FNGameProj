#include "FortEQSPrevisActor.h"
#include "Components/SceneComponent.h"

AFortEQSPrevisActor::AFortEQSPrevisActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp"));
    this->SceneRoot = (USceneComponent*)RootComponent;
}

void AFortEQSPrevisActor::SetQueryTemplate(UEnvQuery* InPrevisQueryTemplate) {
}



