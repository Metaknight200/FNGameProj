#include "BuildingTrapCeiling.h"

ABuildingTrapCeiling::ABuildingTrapCeiling(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildingAttachmentType = ATTACH_Ceiling;
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
}


