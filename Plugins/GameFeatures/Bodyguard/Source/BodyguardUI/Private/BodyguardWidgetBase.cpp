#include "BodyguardWidgetBase.h"

UBodyguardWidgetBase::UBodyguardWidgetBase() {
    this->CachedBodyguardMutator = NULL;
    this->CachedPlayerVM = NULL;
}


void UBodyguardWidgetBase::OnMutatorAvailable(AFortGameplayMutator* MutatorActor) {
}




void UBodyguardWidgetBase::HandleOnVIPDataChange() {
}







AFortPlayerState* UBodyguardWidgetBase::GetVIPPlayerStateForTeam(uint8 TeamNum) const {
    return NULL;
}

EBodyguardPlayerRole UBodyguardWidgetBase::GetOwningPlayerRole() const {
    return EBodyguardPlayerRole::None;
}

AFortAthenaMutator_Bodyguard* UBodyguardWidgetBase::GetBodyguardMutator() const {
    return NULL;
}


