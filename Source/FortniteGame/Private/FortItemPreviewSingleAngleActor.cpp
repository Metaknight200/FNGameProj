#include "FortItemPreviewSingleAngleActor.h"
#include "Camera/CameraComponent.h"

AFortItemPreviewSingleAngleActor::AFortItemPreviewSingleAngleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZoomedOutCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutCameraComponent"));
    this->ZoomedInCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInCameraComponent"));
    this->ZoomedInCameraComponent->SetupAttachment(RootComponent);
    this->ZoomedOutCameraComponent->SetupAttachment(RootComponent);
}


