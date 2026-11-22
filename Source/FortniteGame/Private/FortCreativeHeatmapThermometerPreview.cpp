#include "FortCreativeHeatmapThermometerPreview.h"
#include "Components/SceneComponent.h"

AFortCreativeHeatmapThermometerPreview::AFortCreativeHeatmapThermometerPreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


