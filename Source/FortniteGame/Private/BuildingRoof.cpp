#include "BuildingRoof.h"
#include "BuildingEditModeSupport_Roof.h"

ABuildingRoof::ABuildingRoof(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsNavigationModifier = true;
    this->bCanExportNavigationCollisions = true;
    this->bCanExportNavigationObstacle = false;
    this->bHasCustomAttackLocation = true;
    this->bRotateInPlaceEditor = false;
    this->BuildingType = EFortBuildingType::Roof;
    this->bRegisterWithStructuralGrid = true;
    this->EditModeSupportClass = UBuildingEditModeSupport_Roof::StaticClass();
}


