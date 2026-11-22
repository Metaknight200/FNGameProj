#include "BuildingTrapWall.h"

ABuildingTrapWall::ABuildingTrapWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNoCollision = true;
    this->bCameraOnlyCollision = false;
    this->BuildingAttachmentType = ATTACH_Wall;
    this->ShouldTriggerTraceOffsets.AddDefaulted(3);
}


