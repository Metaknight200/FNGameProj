#include "FortSettingsListEntrySetting_ControllerButton.h"

UFortSettingsListEntrySetting_ControllerButton::UFortSettingsListEntrySetting_ControllerButton() {
    this->BindingMenuClass = NULL;
    this->ControllerInputSetting = NULL;
    this->Key_ControllerButton = NULL;
    this->MenuAnchor_BindableActions = NULL;
}


void UFortSettingsListEntrySetting_ControllerButton::HandleActionButtonClicked() {
}

UUserWidget* UFortSettingsListEntrySetting_ControllerButton::GetPopupMenu() {
    return NULL;
}


