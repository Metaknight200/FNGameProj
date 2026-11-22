#include "WaxActiveTokenEventWidgetBase.h"
#include "FortAthenaMutator_Wax.h"

UWaxActiveTokenEventWidgetBase::UWaxActiveTokenEventWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Wax::StaticClass();
    this->WaxMutator = NULL;
    this->WaxTokensForMediumCrit = 20;
    this->WaxTokensForHighCrit = 45;
}

int32 UWaxActiveTokenEventWidgetBase::GetWaxTokensMediumCrit() const {
    return 0;
}

int32 UWaxActiveTokenEventWidgetBase::GetWaxTokensHighCrit() const {
    return 0;
}


