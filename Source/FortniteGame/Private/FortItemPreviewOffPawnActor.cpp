#include "FortItemPreviewOffPawnActor.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

AFortItemPreviewOffPawnActor::AFortItemPreviewOffPawnActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PreviewActor"));
    const FProperty* p_UserRotationComponent_Parent = GetClass()->FindPropertyByName("UserRotationComponent");
    this->PreviewStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PreviewStaticMesh"));
    this->PreviewSkelMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PreviewSkeletalMesh"));
    this->ContentOnDemandItemDefinition = NULL;
    this->bUseItemDefConfiguredLocation = true;
    this->PreviewActorComponent->SetupAttachment(*p_UserRotationComponent_Parent->ContainerPtrToValuePtr<USceneComponent*>(this));
    this->PreviewSkelMeshComponent->SetupAttachment(*p_UserRotationComponent_Parent->ContainerPtrToValuePtr<USceneComponent*>(this));
    this->PreviewStaticMeshComponent->SetupAttachment(*p_UserRotationComponent_Parent->ContainerPtrToValuePtr<USceneComponent*>(this));
}

TSoftObjectPtr<UTexture2D> AFortItemPreviewOffPawnActor::GetPreviewIcon() const {
    return NULL;
}


