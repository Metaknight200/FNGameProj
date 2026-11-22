#include "FortAlterationsWidget.h"

UFortAlterationsWidget::UFortAlterationsWidget() {
    this->Item = NULL;
    this->State = EFortAlterationWidgetState::Normal;
    this->ItemToCompareWith = NULL;
    this->bUseButtons = false;
    this->EmptyText = NULL;
    this->ButtonGroup = NULL;
}

void UFortAlterationsWidget::SetupInteractionEvents(UFortAlterationButtonWidget* Buttion) {
}

void UFortAlterationsWidget::SetUpgradeLevelDelta(int32 InUpgradeLevelDelta) {
}

void UFortAlterationsWidget::SetState(EFortAlterationWidgetState InState) {
}

void UFortAlterationsWidget::SetItemToCompareWith(UFortItem* InItem) {
}

void UFortAlterationsWidget::SetItem(UFortItem* InItem, bool bInPreviewNewAlterations, bool bIntroAlterations) {
}

void UFortAlterationsWidget::ProcessAlterations() {
}








void UFortAlterationsWidget::HandleAlterationsSlotSelected(UCommonButtonLegacy* InAlterationButton, int32 SelectedIndex) {
}

void UFortAlterationsWidget::HandleAlterationsSlotHovered(UCommonButtonLegacy* InAlterationButton, int32 SelectedIndex) {
}


