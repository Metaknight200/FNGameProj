#include "WaxPlacementWidgetBase.h"
#include "FortAthenaMutator_Wax.h"

UWaxPlacementWidgetBase::UWaxPlacementWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Wax::StaticClass();
    this->WaxMutator = NULL;
}



void UWaxPlacementWidgetBase::OnAnyTokenChange() {
}

void UWaxPlacementWidgetBase::NativeOnPodiumChangeOccured() {
}


