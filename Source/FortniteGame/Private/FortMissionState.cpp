#include "FortMissionState.h"

AFortMissionState::AFortMissionState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bAlreadySetTimerOnce = false;
    this->bAlreadyCalledOnAllPlayersLoadedIn = false;
    this->TimerForOnAllPlayersLoadedIn = 30.00f;
}

void AFortMissionState::UpdateUI() {
}

void AFortMissionState::SetTimerForOnAllPlayersLoadedIn(float Timer) {
}

void AFortMissionState::SendMissionUIEvent(const FGameplayTagContainer& EventTags) {
}



void AFortMissionState::OnAllPlayersLoadedInWrapper() {
}



