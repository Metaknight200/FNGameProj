#include "PerkSelectionEntryWidget.h"

UPerkSelectionEntryWidget::UPerkSelectionEntryWidget() {
    this->SelectionIndex = -1;
    this->ItemA = NULL;
    this->ItemB = NULL;
}


void UPerkSelectionEntryWidget::OnSelectionMade() {
}

bool UPerkSelectionEntryWidget::GetTechSelectVerboseModeEnabled() const {
    return false;
}


