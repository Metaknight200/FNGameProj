#include "FortRelevancyZoneIndicator.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AFortRelevancyZoneIndicator::AFortRelevancyZoneIndicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->RelevancyZoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RelevancyZoneMesh"));
    this->CustomDepthMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CustomDepthMesh"));
    this->RelevancyZoneToWorldScale = 1.00f;
    this->MiniMapNetRelevancyOverlayMaterial = NULL;
    this->MiniMapNetRelevancyCircleMaterial = NULL;
    this->MinimapNetRelevancyOverlayMID = NULL;
    this->MinimapNetRelevancyCircleMID = NULL;
    this->CustomDepthMesh->SetupAttachment(RootComponent);
    this->RelevancyZoneMesh->SetupAttachment(RootComponent);
}


