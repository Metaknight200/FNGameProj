#include "PaybackHUDWidgetBase.h"
#include "FortAthenaMutator_Payback.h"

UPaybackHUDWidgetBase::UPaybackHUDWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Payback::StaticClass();
    this->CachedPaybackMutator = NULL;
}

void UPaybackHUDWidgetBase::OnMutatorAvailable(AFortGameplayMutator* MutatorActor) {
}


