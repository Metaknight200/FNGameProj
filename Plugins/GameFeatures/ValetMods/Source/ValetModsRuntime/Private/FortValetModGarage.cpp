#include "FortValetModGarage.h"

AFortValetModGarage::AFortValetModGarage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentVehicle = NULL;
    this->ModInteractPointClass = NULL;
}

void AFortValetModGarage::OnVehicleExit(AFortDagwoodVehicle* ExitingVehicle) {
}

void AFortValetModGarage::OnVehicleEnter(AFortDagwoodVehicle* NewVehicle) {
}


