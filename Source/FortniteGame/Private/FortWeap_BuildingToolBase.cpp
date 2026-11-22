#include "FortWeap_BuildingToolBase.h"
#include "Components/StaticMeshComponent.h"

AFortWeap_BuildingToolBase::AFortWeap_BuildingToolBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PencilMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PencilMeshComponent0"));
    this->InstigatorController = NULL;
    this->InstigatorBotController = NULL;
}

UStaticMeshComponent* AFortWeap_BuildingToolBase::GetPencilMeshComponent() const {
    return NULL;
}


