#include "NoWeaponZoneTrackedData.h"

UNoWeaponZoneTrackedData::UNoWeaponZoneTrackedData() {
    this->Minigame = NULL;
}

void UNoWeaponZoneTrackedData::UntrackDevice() {
}

void UNoWeaponZoneTrackedData::TrackNewDevice() {
}

void UNoWeaponZoneTrackedData::StartResetDestroyCountTimer() {
}

void UNoWeaponZoneTrackedData::SetupMinigame(AFortMinigame* InMinigame) {
}

void UNoWeaponZoneTrackedData::OnMinigameStarted() {
}

void UNoWeaponZoneTrackedData::OnMinigameEnded() {
}

bool UNoWeaponZoneTrackedData::IsTrackedDestroyAtLimit() const {
    return false;
}

int32 UNoWeaponZoneTrackedData::GetMaxDestroyCountPerTrackedDevice() const {
    return 0;
}

int32 UNoWeaponZoneTrackedData::GetMaxDestroyCount() const {
    return 0;
}

int32 UNoWeaponZoneTrackedData::GetDestroyCount() const {
    return 0;
}

void UNoWeaponZoneTrackedData::AddTrackedDestroy() {
}


