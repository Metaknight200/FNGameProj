#include "FortItemPreviewSceneChanger.h"
#include "Camera/CameraComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"

AFortItemPreviewSceneChanger::AFortItemPreviewSceneChanger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneChangeRootComponent"));
    this->TransitionCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TransitionCameraComponent"));
    this->PrimarySceneComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PrimarySceneComponent"));
    this->SecondarySceneComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("SecondarySceneComponent"));
    this->bHasEtherealBackground = false;
    this->SceneChangeRootComponent = (USceneComponent*)RootComponent;
    this->PrimaryScene = NULL;
    this->SecondaryScene = NULL;
    this->SceneTransitioningTo = NULL;
    this->ActiveScene = NULL;
    this->ZoomLevel = 0.00f;
    this->PrimarySceneComponent->SetupAttachment(RootComponent);
    this->SecondarySceneComponent->SetupAttachment(RootComponent);
    this->TransitionCameraComponent->SetupAttachment(RootComponent);
}

void AFortItemPreviewSceneChanger::TickZoomLevel() {
}

void AFortItemPreviewSceneChanger::TickPedestalRotationOffset() {
}






bool AFortItemPreviewSceneChanger::IsSoundEnabled() const {
    return false;
}

AItemPreviewScene* AFortItemPreviewSceneChanger::GetSceneTransitioningTo() {
    return SceneTransitioningTo;
}

AItemPreviewScene* AFortItemPreviewSceneChanger::GetPrimaryScene() {
    return PrimaryScene;
}

AItemPreviewScene* AFortItemPreviewSceneChanger::GetActiveScene() {
    return ActiveScene;
}


