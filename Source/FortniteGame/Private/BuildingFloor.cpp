#include "BuildingFloor.h"
#include "BuildingEditModeSupport_Floor.h"

ABuildingFloor::ABuildingFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsNavigationModifier = true;
    this->bCanExportNavigationCollisions = true;
    this->bCanExportNavigationObstacle = false;
    this->bRotateInPlaceEditor = false;
    this->bDestroyFoliageWhenPlaced = true;
    this->BuildingType = EFortBuildingType::Floor;
    this->bRegisterWithStructuralGrid = true;
    this->EditModeSupportClass = UBuildingEditModeSupport_Floor::StaticClass();
    const FProperty* p_BuildingAttachmentSlot = GetClass()->FindPropertyByName("BuildingAttachmentSlot");
    (*p_BuildingAttachmentSlot->ContainerPtrToValuePtr<TEnumAsByte<EBuildingAttachmentSlot>>(this)) = SLOT_Floor;
    this->bShouldIgnoreForHorizontalHotspotSearch = true;
}

bool ABuildingFloor::IsBalcony() const {
    return false;
}


