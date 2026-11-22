#include "CreativeIslandExporter.h"
#include "Components/SceneComponent.h"

ACreativeIslandExporter::ACreativeIslandExporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


