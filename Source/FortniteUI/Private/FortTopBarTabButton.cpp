#include "FortTopBarTabButton.h"

UFortTopBarTabButton::UFortTopBarTabButton() {
    this->bUseAlternateLabelStyle = false;
    this->bAlwaysShowTextLabel = false;
    this->BangWrapper = NULL;
    this->Image_MobileIcon = NULL;
    this->Text_DisplayName = NULL;
}

void UFortTopBarTabButton::SetTabLabelInfo_Implementation(const FFortTabButtonLabelInfo& TabLabelInfo) {
}


bool UFortTopBarTabButton::IsAlternateLabelStyleUsed() const {
    return false;
}


