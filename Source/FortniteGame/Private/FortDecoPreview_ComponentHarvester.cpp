#include "FortDecoPreview_ComponentHarvester.h"
#include "Components/SceneComponent.h"

AFortDecoPreview_ComponentHarvester::AFortDecoPreview_ComponentHarvester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp0"));
}


