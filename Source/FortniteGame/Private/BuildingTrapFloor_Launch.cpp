#include "BuildingTrapFloor_Launch.h"

ABuildingTrapFloor_Launch::ABuildingTrapFloor_Launch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
    this->ForceFeedbackName = TEXT("LaunchTrap");
}



