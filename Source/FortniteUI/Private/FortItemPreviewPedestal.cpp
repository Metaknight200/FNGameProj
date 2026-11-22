#include "FortItemPreviewPedestal.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

AFortItemPreviewPedestal::AFortItemPreviewPedestal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TemporaryHeroInstance = NULL;
    this->WeaponPlacementComponent = CreateDefaultSubobject<USceneComponent>(TEXT("WeaponPlacementHelper"));
    this->PreviewActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PreviewActor"));
    this->PreviewStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PreviewStaticMesh"));
    this->PreviewSkelMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PreviewSkeletalMesh"));
    this->PreviewActorComponent->SetupAttachment(RootComponent);
    this->PreviewSkelMeshComponent->SetupAttachment(RootComponent);
    this->PreviewStaticMeshComponent->SetupAttachment(RootComponent);
    this->WeaponPlacementComponent->SetupAttachment(RootComponent);
}

void AFortItemPreviewPedestal::PreviewItemBP(UFortItem* Item) {
}

void AFortItemPreviewPedestal::ClearDisplay() {
}


