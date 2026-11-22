#include "BuildingTrapLauncher.h"

ABuildingTrapLauncher::ABuildingTrapLauncher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
}


