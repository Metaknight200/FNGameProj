#include "GameplayCueNotify_Jetpack_Hovering.h"

AGameplayCueNotify_Jetpack_Hovering::AGameplayCueNotify_Jetpack_Hovering(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTickEnabled = true;
    this->bUsesFuel = false;
    this->OutOfFuelAudioCurve = NULL;
    this->AccelAudioComp = NULL;
    this->IdleAudioComp = NULL;
    this->OutOfFuelAudioComp = NULL;
    this->ParticleSystemComp = NULL;
    this->PlayerPawn = NULL;
    this->ActivationTime = 0.00f;
    this->UpwardVelocity = 0.00f;
    this->FuelVolumeMultiplier = 0.00f;
    this->bPlayedFuelWarning = false;
    this->SoundOnFuelLowWarning = NULL;
}




