#include "InfiltrationSelectedPerksWidget.h"
#include "FortAthenaMutator_PerkSystemMutator.h"

UInfiltrationSelectedPerksWidget::UInfiltrationSelectedPerksWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_PerkSystemMutator::StaticClass();
}



