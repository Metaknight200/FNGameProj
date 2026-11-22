#include "MashWidgetBase.h"
#include "FortAthenaMutator_Mash.h"

UMashWidgetBase::UMashWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Mash::StaticClass();
    this->MashMutatorRef = NULL;
    this->CachedLocalPlayerState = NULL;
}




void UMashWidgetBase::OnPlayerDataChanged() {
}


