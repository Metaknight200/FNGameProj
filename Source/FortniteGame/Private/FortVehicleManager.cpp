#include "FortVehicleManager.h"

AFortVehicleManager::AFortVehicleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplayRewindable = true;
}

void AFortVehicleManager::OnNavSystemLockReleased() {
}

bool AFortVehicleManager::GetVehicleManager(const UObject* WorldContextObject, AFortVehicleManager*& VehicleManager) {
    return false;
}

int32 AFortVehicleManager::GetVehicleCountByTag(FGameplayTag VehicleTag) const {
    return 0;
}


