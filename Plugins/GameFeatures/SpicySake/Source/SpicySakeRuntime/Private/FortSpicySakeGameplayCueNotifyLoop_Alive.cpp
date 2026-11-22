#include "FortSpicySakeGameplayCueNotifyLoop_Alive.h"

AFortSpicySakeGameplayCueNotifyLoop_Alive::AFortSpicySakeGameplayCueNotifyLoop_Alive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaterFX_Native = NULL;
    this->LandFX_Native = NULL;
    this->FortLayerAudio_Native = NULL;
    this->TargetAIPawn_Native = NULL;
    this->bComputeWaterDepth = true;
    this->TetheredVolumeMultiplier = 0.30f;
    this->SoundSurfaceTypeCount = 3.00f;
    this->VelocityClampingMinimum = 200.00f;
    this->VelocityClampingMaximum = 800.00f;
}


