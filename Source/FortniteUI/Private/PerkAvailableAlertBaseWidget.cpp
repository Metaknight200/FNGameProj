#include "PerkAvailableAlertBaseWidget.h"
#include "FortAthenaMutator_PerkSystemMutator.h"

UPerkAvailableAlertBaseWidget::UPerkAvailableAlertBaseWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_PerkSystemMutator::StaticClass();
}



