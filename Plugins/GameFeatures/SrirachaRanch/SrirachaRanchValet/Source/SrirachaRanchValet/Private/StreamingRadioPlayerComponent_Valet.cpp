#include "StreamingRadioPlayerComponent_Valet.h"

UStreamingRadioPlayerComponent_Valet::UStreamingRadioPlayerComponent_Valet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisabledVehicleList.AddDefaulted(3);
}

void UStreamingRadioPlayerComponent_Valet::ValetVehicleExploded(AFortDagwoodVehicle* Veh) {
}


