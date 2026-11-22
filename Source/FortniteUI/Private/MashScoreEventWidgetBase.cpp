#include "MashScoreEventWidgetBase.h"
#include "FortAthenaMutator_Mash.h"

UMashScoreEventWidgetBase::UMashScoreEventWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Mash::StaticClass();
    this->MashMutatorRef = NULL;
    this->CachedLocalPlayerState = NULL;
    this->StreakScoreMultiplierRemainingTime = 0.00f;
}

void UMashScoreEventWidgetBase::UpdateStreakScoreMultiplierCountdown() {
}



void UMashScoreEventWidgetBase::OnStreakScoreMultiplierExpires() {
}



void UMashScoreEventWidgetBase::OnPlayerDataChanged() {
}


