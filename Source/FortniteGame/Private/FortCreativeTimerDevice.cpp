#include "FortCreativeTimerDevice.h"

AFortCreativeTimerDevice::AFortCreativeTimerDevice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ServerDisplayUpdateRate = 60.00f;
    this->Volume = NULL;
}

void AFortCreativeTimerDevice::TimerStart(AController* TrackedPlayer, float Duration, float TimeUntilUrgency) {
}

void AFortCreativeTimerDevice::TimerSetState(AController* TrackedPlayer, ETimerDeviceState NewState, bool bLoadingFromSave) {
}

void AFortCreativeTimerDevice::TimerResume(AController* TrackedPlayer) {
}

void AFortCreativeTimerDevice::TimerPause(AController* TrackedPlayer) {
}

void AFortCreativeTimerDevice::TimerClearHandles(AController* TrackedPlayer) {
}

void AFortCreativeTimerDevice::ServerRequestDisplayUpdate(AController* TrackedPlayer, const TArray<AController*>& PlayersToUpdate) {
}

void AFortCreativeTimerDevice::ServerRequestClearDisplay(const TArray<AController*>& PlayersToUpdate) {
}

void AFortCreativeTimerDevice::RemoveTrackedTimer(AController* PlayerController) {
}





void AFortCreativeTimerDevice::OnGameStateSet(AFortGameState* GameState) {
}

int32 AFortCreativeTimerDevice::GetTrackedPlayers(TArray<AController*>& OutTrackedPlayers) const {
    return 0;
}

bool AFortCreativeTimerDevice::GetTimerState(AController* TrackedPlayer, ETimerDeviceState& OutState) const {
    return false;
}

float AFortCreativeTimerDevice::GetTimerRemaining(AController* TrackedPlayer) const {
    return 0.0f;
}


void AFortCreativeTimerDevice::CreateTrackedTimer(AController* PlayerController) {
}

void AFortCreativeTimerDevice::ClearTrackedTimers() {
}


void AFortCreativeTimerDevice::BroadcastUpdateToHUD() {
}






void AFortCreativeTimerDevice::AddTimerDeviceToVolume() {
}


