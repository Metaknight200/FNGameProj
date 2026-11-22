#include "GameplayCueNotify_Jetpack_FuelRegen.h"

AGameplayCueNotify_Jetpack_FuelRegen::AGameplayCueNotify_Jetpack_FuelRegen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAudioEnabled = false;
    this->OnFuelRegenRampComponent = NULL;
    this->FuelRegenRampVolumeMultiplier = 0.00f;
    this->SoundOnFuelChangeRamp = NULL;
    this->SoundOnFuelRecharged = NULL;
    this->FuelRegenRampVolumeCurve = NULL;
}

void AGameplayCueNotify_Jetpack_FuelRegen::ResetBlink_Implementation(AFortPlayerPawn* PlayerPawn) {
}


