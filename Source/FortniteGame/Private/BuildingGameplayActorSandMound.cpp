#include "BuildingGameplayActorSandMound.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ABuildingGameplayActorSandMound::ABuildingGameplayActorSandMound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->bIsDynamic = true;
    this->MeshRotationInterpSpeed = 5.00f;
    this->MoundMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MoundMesh"));
    this->MoundMID = NULL;
    this->MoundMesh->SetupAttachment(RootComponent);
}


