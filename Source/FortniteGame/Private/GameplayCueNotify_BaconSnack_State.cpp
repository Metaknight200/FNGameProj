#include "GameplayCueNotify_BaconSnack_State.h"

AGameplayCueNotify_BaconSnack_State::AGameplayCueNotify_BaconSnack_State(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerPawn = NULL;
    this->MeshDataIndex = 10;
    this->Mesh = NULL;
    this->StealthMeter = 0.00f;
    this->StealthMeterTime = 0.00f;
    this->CachedAlertStateComp = NULL;
}


