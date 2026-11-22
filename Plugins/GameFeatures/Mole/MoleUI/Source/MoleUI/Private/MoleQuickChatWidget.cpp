#include "MoleQuickChatWidget.h"

UMoleQuickChatWidget::UMoleQuickChatWidget() {
    this->CategoryWidgetClass = NULL;
    this->ActionWidgetClass = NULL;
    this->Overlay_Selections = NULL;
    this->Switcher_SelectionMethods = NULL;
    this->Overlay_Radial = NULL;
    this->Overlay_Players = NULL;
    this->Overlay_Map = NULL;
    this->Radial_Selections = NULL;
    this->MolePlayers_PlayerSelection = NULL;
    this->MoleMap_LocationSelection = NULL;
    this->SizeBox_HotkeyBar = NULL;
    this->Overlay_FullscreenContainer = NULL;
    this->QuickChatInputComponent = NULL;
}





bool UMoleQuickChatWidget::AreAcceptAndBackInverted() const {
    return false;
}


