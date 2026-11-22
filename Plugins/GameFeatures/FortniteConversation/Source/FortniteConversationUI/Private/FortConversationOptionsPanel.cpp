#include "FortConversationOptionsPanel.h"
#include "Components/SlateWrapperTypes.h"

UFortConversationOptionsPanel::UFortConversationOptionsPanel() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->MaxRows = 2;
    this->MiddleColumnWidth = 260;
}

UPanelSlot* UFortConversationOptionsPanel::AddChildToDynamicPanel(UWidget* Content) {
    return NULL;
}


