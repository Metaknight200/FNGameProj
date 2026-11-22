#include "PhosphorusWidgetBase.h"
#include "FortAthenaMutator_Phosphorus.h"

UPhosphorusWidgetBase::UPhosphorusWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Phosphorus::StaticClass();
    this->CachedPhosphorusMutator = NULL;
}

void UPhosphorusWidgetBase::SetAvatarImageFromPlayerState(const AFortPlayerStateAthena* PlayerState, UFortLazyImage* AvatarImage) {
}

void UPhosphorusWidgetBase::OnMutatorAvailable(AFortGameplayMutator* MutatorActor) {
}


AFortAthenaMutator_Phosphorus* UPhosphorusWidgetBase::GetPhosphorusMutator() const {
    return NULL;
}


