#include "FortItemPreviewActor.h"
#include "Components/SceneComponent.h"

AFortItemPreviewActor::AFortItemPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SpecialEventMaterial = NULL;
    this->ItemPreviewRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ItemPreviewRootComponent"));
    this->UserRotationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("UserRotationComponent"));
    this->ZoomLevel = 0.00f;
    this->ItemPreviewRootComponent->SetupAttachment(RootComponent);
    this->UserRotationComponent->SetupAttachment(ItemPreviewRootComponent);
}





bool AFortItemPreviewActor::IsSceneTransitioning() const {
    return false;
}

bool AFortItemPreviewActor::ArePreviewVisualsReady() const {
    return false;
}


