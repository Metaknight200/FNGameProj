#include "FortGameplayCueNotifyLoop_LowGravity.h"

AFortGameplayCueNotifyLoop_LowGravity::AFortGameplayCueNotifyLoop_LowGravity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InterpDelta = 0.00f;
    this->TargetDelta = 0.00f;
    this->PlayerPawn = NULL;
    this->StartTime = 0.00f;
    this->Duration = 0.00f;
    this->ExpirationTellDuration = 0.00f;
    this->TargetDelta_FallingRangeInput_Start = 0.00f;
    this->TargetDelta_FallingRangeInput_End = 1000.00f;
    this->TargetDelta_FallingRangeOutput_Start = 0.00f;
    this->TargetDelta_FallingRangeOutput_End = 1.00f;
    this->InterpSpeedHigh = 10.00f;
    this->InterpSpeedLow = 2.00f;
    this->SoundMultiplier_RangeOutput_Start = 1.00f;
    this->SoundMultiplier_RangeOutput_End = 0.75f;
    this->SoundParam_FallSpeed = TEXT("FallSpeed");
    this->SoundParam_FallSpeedInv = TEXT("FallSpeedInv");
}


