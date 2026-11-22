#include "BuildingPropCorner.h"

ABuildingPropCorner::ABuildingPropCorner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBlockNavigationLinks = true;
    this->BuildingType = EFortBuildingType::Prop;
    this->bNoCameraCollision = true;
    this->bNoCollision = false;
}


