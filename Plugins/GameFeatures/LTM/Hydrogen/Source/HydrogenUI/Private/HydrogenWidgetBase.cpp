#include "HydrogenWidgetBase.h"

UHydrogenWidgetBase::UHydrogenWidgetBase() {
    this->CachedHydrogenMutator = NULL;
}

void UHydrogenWidgetBase::OnMutatorAvailable(AFortGameplayMutator* MutatorActor) {
}


AFortAthenaMutator_Hydrogen* UHydrogenWidgetBase::GetHydrogenMutator() const {
    return NULL;
}

float UHydrogenWidgetBase::GetCaptureProgressPercent(const AHydrogenObjectiveActor* InObjective) const {
    return 0.0f;
}


