#include "BuildingPillar.h"

ABuildingPillar::ABuildingPillar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRotateInPlaceEditor = false;
    this->BuildingType = EFortBuildingType::Pillar;
    this->bRegisterWithStructuralGrid = true;
}


