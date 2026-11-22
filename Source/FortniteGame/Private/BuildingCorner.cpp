#include "BuildingCorner.h"

ABuildingCorner::ABuildingCorner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildingType = EFortBuildingType::Corner;
    this->bNoCollision = true;
    this->BuildingAttachmentType = ATTACH_Corner;
    this->PrimaryWall = NULL;
    this->SecondaryWall = NULL;
}


