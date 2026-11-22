#include "WorldMapPin.h"
#include "Components/SceneComponent.h"

AWorldMapPin::AWorldMapPin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
}

void AWorldMapPin::SetTheaterId(const FString& NewID) {
}



