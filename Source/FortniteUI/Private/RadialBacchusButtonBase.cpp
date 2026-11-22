#include "RadialBacchusButtonBase.h"

URadialBacchusButtonBase::URadialBacchusButtonBase() {
    this->TrackingType = ECooldownTrackingType::Cue;
    this->CooldownDuration = 0.00f;
    this->CooldownStartTime = 0.00f;
    this->TrackedPawn = NULL;
}


void URadialBacchusButtonBase::UpdateCooldown() {
}

void URadialBacchusButtonBase::StopUpdateCooldown() {
}

void URadialBacchusButtonBase::StartUpdateCooldown() {
}

void URadialBacchusButtonBase::SetListenedGameplayTag(FGameplayTag InListenedTag) {
}


void URadialBacchusButtonBase::ReceiveRadialProgressEvent(FName EventName, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters) {
}

void URadialBacchusButtonBase::OnPlayerPawnSet() {
}



bool URadialBacchusButtonBase::HasActiveCooldown() const {
    return false;
}

void URadialBacchusButtonBase::HandleUIGameplayCue(FName CueName, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters) {
}

float URadialBacchusButtonBase::GetRemainingDuration() const {
    return 0.0f;
}

FGameplayTag URadialBacchusButtonBase::GetListenedGameplayTag() {
    return FGameplayTag{};
}

void URadialBacchusButtonBase::GameplayTagCallback(const FGameplayTag Tag, int32 NewCount) {
}


