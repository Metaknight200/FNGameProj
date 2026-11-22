#include "FortItemManagementModeDetailsPanel.h"

UFortItemManagementModeDetailsPanel::UFortItemManagementModeDetailsPanel() {
    this->ModeWidgetSwitcher = NULL;
    this->DetailsModeItemDetailsPanel = NULL;
    this->ComparisonModeItemDetailsPanel = NULL;
    this->MulchModeItemDetailsPanel = NULL;
}



EFortItemManagementMode UFortItemManagementModeDetailsPanel::GetItemManagementMode() const {
    return EFortItemManagementMode::Details;
}


