#include "ItemPreviewScene.h"
#include "Components/ChildActorComponent.h"

AItemPreviewScene::AItemPreviewScene(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("FocusCameraTargetComponent"));
    this->FocusCameraTargetComponent = (UChildActorComponent*)RootComponent;
    this->FocusCameraTargetPedestal = NULL;
}

void AItemPreviewScene::HandleItemShown(const UFortAccountItemDefinition* ItemViewed, AFortCameraTargetPedestal* Pedestal) {
}


