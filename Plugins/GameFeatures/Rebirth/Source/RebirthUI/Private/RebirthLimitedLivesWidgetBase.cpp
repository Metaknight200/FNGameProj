#include "RebirthLimitedLivesWidgetBase.h"
#include "FortAthenaMutator_Rebirth.h"

URebirthLimitedLivesWidgetBase::URebirthLimitedLivesWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Rebirth::StaticClass();
    this->CurrentRarity = EFortRarity::Unattainable;
    this->CurrentLivesRemaining = 0;
}

void URebirthLimitedLivesWidgetBase::UpdateWidgetRarity_Implementation(bool bPlayAnimations) {
}

void URebirthLimitedLivesWidgetBase::HandlePlayerRaritiesUpdated() {
}

void URebirthLimitedLivesWidgetBase::HandlePawnChanged() {
}



