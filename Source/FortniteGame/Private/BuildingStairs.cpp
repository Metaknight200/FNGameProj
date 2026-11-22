#include "BuildingStairs.h"
#include "BuildingEditModeSupport_Stair.h"

ABuildingStairs::ABuildingStairs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildingType = EFortBuildingType::Stairs;
    this->EditModeSupportClass = UBuildingEditModeSupport_Stair::StaticClass();
    this->RailingType = EBuildingStairsRailing::Partial;
}


