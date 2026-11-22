#include "WaxRespawnCounterWidget.h"
#include "FortAthenaMutator_Wax.h"

UWaxRespawnCounterWidget::UWaxRespawnCounterWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_Wax::StaticClass();
}



