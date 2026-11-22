#include "FortSafeZoneEditor.h"
#include "Components/SlateWrapperTypes.h"

UFortSafeZoneEditor::UFortSafeZoneEditor() {
    this->Visibility = ESlateVisibility::Visible;
    this->bIsFocusable = true;
    this->bCanCancel = true;
    this->Switcher_SafeZoneMessage = NULL;
    this->RichText_Default = NULL;
    this->RichText_SwitchHandheldWarning = NULL;
    this->Button_Back = NULL;
    this->Button_Done = NULL;
}

void UFortSafeZoneEditor::SetChildSettingReference(UFortSetting* SettingReference) {
}

void UFortSafeZoneEditor::HandleDoneClicked() {
}

void UFortSafeZoneEditor::HandleBackClicked() {
}


