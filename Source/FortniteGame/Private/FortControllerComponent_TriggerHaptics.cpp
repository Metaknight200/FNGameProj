#include "FortControllerComponent_TriggerHaptics.h"

UFortControllerComponent_TriggerHaptics::UFortControllerComponent_TriggerHaptics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTriggerHapticsAvailable = true;
}

void UFortControllerComponent_TriggerHaptics::UpdateTriggerHaptics() {
}

void UFortControllerComponent_TriggerHaptics::ResetTriggerHaptics() {
}

void UFortControllerComponent_TriggerHaptics::OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon) {
}

void UFortControllerComponent_TriggerHaptics::OnPawnChanged(AFortPawn* InPawn) {
}


