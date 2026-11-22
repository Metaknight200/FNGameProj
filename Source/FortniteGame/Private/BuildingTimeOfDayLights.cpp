#include "BuildingTimeOfDayLights.h"

ABuildingTimeOfDayLights::ABuildingTimeOfDayLights(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseTimeOfDayControlledLights = true;
}

void ABuildingTimeOfDayLights::GetTimeOfDayBlueprintDefaultVariables_Implementation(FTimeOfDayBlueprintDefaultVariables& OutVariables) {
}


