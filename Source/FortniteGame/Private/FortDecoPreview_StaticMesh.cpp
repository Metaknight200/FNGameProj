#include "FortDecoPreview_StaticMesh.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AFortDecoPreview_StaticMesh::AFortDecoPreview_StaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->PrimaryMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PrimaryMeshComp0"));
    this->PrimaryMeshComponent->SetupAttachment(RootComponent);
}


