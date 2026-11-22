#include "FortSocialPanel.h"
#include "EInputPriority.h"

UFortSocialPanel::UFortSocialPanel() {
    this->bIsFocusable = true;
    this->InputPriority = EInputPriority::Modal;
    this->PanelView_UserLists = NULL;
}

void UFortSocialPanel::OnClosePanelInternal(bool& PassThrough) {
}

bool UFortSocialPanel::IsAnySlideOutMenuOpen() const {
    return false;
}

void UFortSocialPanel::HandleSocialPanelClose() {
}



