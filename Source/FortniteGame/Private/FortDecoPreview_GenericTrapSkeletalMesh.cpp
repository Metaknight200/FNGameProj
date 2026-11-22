#include "FortDecoPreview_GenericTrapSkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"

AFortDecoPreview_GenericTrapSkeletalMesh::AFortDecoPreview_GenericTrapSkeletalMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkelMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkelMeshComp0"));
    this->SkelMeshComponent->SetupAttachment(RootComponent);
}


