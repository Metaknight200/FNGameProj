#include "WaxProgressWidgetBase.h"
#include "FortAthenaMutator_Wax.h"

UWaxProgressWidgetBase::UWaxProgressWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Wax::StaticClass();
    this->WaxMutator = NULL;
}



void UWaxProgressWidgetBase::OnPendingFlashes(const TArray<int32>& Flashes) {
}

void UWaxProgressWidgetBase::OnAnyTokenChange() {
}







