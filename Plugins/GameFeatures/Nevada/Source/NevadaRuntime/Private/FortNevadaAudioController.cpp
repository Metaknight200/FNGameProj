#include "FortNevadaAudioController.h"

AFortNevadaAudioController::AFortNevadaAudioController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Vehicle = NULL;
    this->LayeredAudioComponent = NULL;
    this->SpeedParamValue = 0.00f;
    this->SpeedParamValuePrev = 0.00f;
    this->AcceleratingParamValue = 0.00f;
    this->BrakingParamValue = 0.00f;
    this->TurningParamValue = 0.00f;
    this->PassByParamValue = 0.00f;
    this->LocallyControlledParamValue = 0.00f;
    this->LFOParamValue = 0.00f;
}

void AFortNevadaAudioController::Update() {
}

void AFortNevadaAudioController::Init(AFortNevadaVehicle* InVehicle) {
}

AFortNevadaVehicle* AFortNevadaAudioController::GetVehicleActor() const {
    return NULL;
}

void AFortNevadaAudioController::CacheReferences(UFortLayeredAudioComponent* InLayeredAudioComponent) {
}




