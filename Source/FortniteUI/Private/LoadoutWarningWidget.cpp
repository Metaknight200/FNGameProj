#include "LoadoutWarningWidget.h"
#include "FortAthenaMutator_LoadoutSwap.h"

ULoadoutWarningWidget::ULoadoutWarningWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_LoadoutSwap::StaticClass();
}


void ULoadoutWarningWidget::OnLoadoutWarning(float TimeToSwap) {
}


