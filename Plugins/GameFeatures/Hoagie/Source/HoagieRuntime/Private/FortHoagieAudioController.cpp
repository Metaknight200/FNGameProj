#include "FortHoagieAudioController.h"

AFortHoagieAudioController::AFortHoagieAudioController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHighQualityOverride = false;
    this->bLocalPlayerInHoagie = false;
    this->bCriticalDamageNative = false;
    this->bRotorHitNative = false;
    this->bIsRotorWashActiveNative = false;
    this->RotorWashRelativeZOffset = 0.00f;
    this->EngineAudio = NULL;
    this->RotorAudio = NULL;
}

void AFortHoagieAudioController::Update() {
}

void AFortHoagieAudioController::CacheHoagieVehicle(AFortHoagieVehicle* InVehicle) {
}

void AFortHoagieAudioController::CacheAudioComponents(UFortLayeredAudioComponent* InEngine, UFortLayeredAudioComponent* InRotor) {
}


