#include "WaxTokenEventWidgetBase.h"
#include "FortAthenaMutator_Wax.h"

UWaxTokenEventWidgetBase::UWaxTokenEventWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Wax::StaticClass();
    this->WaxMutator = NULL;
}





