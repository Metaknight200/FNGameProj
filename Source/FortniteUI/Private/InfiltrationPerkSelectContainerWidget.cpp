#include "InfiltrationPerkSelectContainerWidget.h"
#include "FortAthenaMutator_PerkSystemMutator.h"

UInfiltrationPerkSelectContainerWidget::UInfiltrationPerkSelectContainerWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_PerkSystemMutator::StaticClass();
    this->PerkPanelClass = NULL;
}

bool UInfiltrationPerkSelectContainerWidget::PerkSelectionEnabled() const {
    return false;
}


