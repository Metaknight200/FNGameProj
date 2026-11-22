#include "SkyfireWidgetBase.h"

USkyfireWidgetBase::USkyfireWidgetBase() {
    this->CachedSkyfireMutator = NULL;
}

void USkyfireWidgetBase::OnMutatorAvailable(AFortGameplayMutator* MutatorActor) {
}



AFortAthenaMutator_Skyfire* USkyfireWidgetBase::GetSkyfireMutator() const {
    return NULL;
}


