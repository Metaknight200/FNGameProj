#include "RespawnAndSpectateSelectContainerWidget.h"
#include "FortAthenaMutator_RespawnAndSpectateSelect.h"

URespawnAndSpectateSelectContainerWidget::URespawnAndSpectateSelectContainerWidget() {
    this->MutatorClassToWaitFor = AFortAthenaMutator_RespawnAndSpectateSelect::StaticClass();
    this->RespawnAndSpectateSelectWidgetClass = NULL;
}

void URespawnAndSpectateSelectContainerWidget::UpdateRespawnAndSpectateSelectWidgetVisibility(bool bNewVisibility) {
}

void URespawnAndSpectateSelectContainerWidget::OnRespawnAndSpectateSelectPlayerRespawned() {
}

void URespawnAndSpectateSelectContainerWidget::OnRespawnAndSpectateSelectAvailableOptionsChanged() {
}

void URespawnAndSpectateSelectContainerWidget::OnPanelOptionSelected(int32 SelectedOption) {
}


