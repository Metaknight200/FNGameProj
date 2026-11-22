#include "PowTimerWidgetBase.h"
#include "FortAthenaMutator_Pow.h"

UPowTimerWidgetBase::UPowTimerWidgetBase() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Pow::StaticClass();
    this->BaseMutator = NULL;
}



void UPowTimerWidgetBase::NewRespawnTime(int32 NewTimeRemaining) {
}


