#include "BuildingPropWall.h"

ABuildingPropWall::ABuildingPropWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRotateInPlaceGame = true;
    this->bIsNavigationModifier = true;
    this->bBlockNavigationLinks = true;
    this->bRotateInPlaceEditor = false;
    this->bPropagatesBounceEffects = true;
    const FProperty* p_BuildingAttachmentSlot = GetClass()->FindPropertyByName("BuildingAttachmentSlot");
    (*p_BuildingAttachmentSlot->ContainerPtrToValuePtr<TEnumAsByte<EBuildingAttachmentSlot>>(this)) = SLOT_Wall;
    this->BuildingAttachmentType = ATTACH_Wall;
    this->bAutoAssignNavProperties = false;
    this->AreaShapeType = EBuildingWallArea::Regular;
    this->AreaWidthOverride = 0.00f;
    this->bOverrideAreaWidth = false;
}


