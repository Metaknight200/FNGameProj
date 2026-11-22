#include "FortBuildingDestroyedParams.h"

UFortBuildingDestroyedParams::UFortBuildingDestroyedParams() {
    this->Building = NULL;
    this->BuildingType = EFortBuildingType::Wall;
    this->Destroyer = NULL;
}

void UFortBuildingDestroyedParams::SetParams(ABuildingActor* _Building, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AController* _Destroyer, UFortBuildingDestroyedParams*& ThisParam) {
}

void UFortBuildingDestroyedParams::BreakParams(ABuildingActor*& _Building, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AController*& _Destroyer) {
}


