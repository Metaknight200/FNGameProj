#include "FortItemPreviewWorld.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"

AFortItemPreviewWorld::AFortItemPreviewWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->BackgroundMaterial = NULL;
    this->BackgroundMaterialDynamic = NULL;
    this->SceneBackgroundComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("VaultBackgroundComponent"));
    this->SceneBackground = NULL;
    this->SceneChangerComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("VaultRotatorComponent"));
    this->PreviewSceneChanger = NULL;
    this->SceneBackgroundComponent->SetupAttachment(RootComponent);
    this->SceneChangerComponent->SetupAttachment(RootComponent);
}

void AFortItemPreviewWorld::SetBackgroundMaterialDynamic(UMaterialInstanceDynamic* InBackgroundMaterialDynamic) {
}







