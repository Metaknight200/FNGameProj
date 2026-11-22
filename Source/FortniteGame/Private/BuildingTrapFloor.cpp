#include "BuildingTrapFloor.h"

ABuildingTrapFloor::ABuildingTrapFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildingAttachmentType = ATTACH_Floor;
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
}


