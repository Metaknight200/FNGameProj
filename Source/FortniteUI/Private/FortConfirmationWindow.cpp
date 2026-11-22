#include "FortConfirmationWindow.h"

UFortConfirmationWindow::UFortConfirmationWindow() {
    this->EntryBox_SimpleButtons = NULL;
    this->EntryBox_ComplexChoiceButtons = NULL;
    this->Panel_LeftOptionalWidget = NULL;
    this->Panel_OptionalWidget = NULL;
    this->ScrollBox_Description = NULL;
    this->CommonTextBlock_Title = NULL;
    this->CommonTextBlock_Description = NULL;
    this->Image_MainIcon = NULL;
    this->CommonLoadGuard_LatentSpinner = NULL;
    this->DeclineButton = NULL;
}

void UFortConfirmationWindow::HandleDeclineActionClicked(UCommonButtonLegacy* ButtonClicked) {
}

void UFortConfirmationWindow::HandleCancelButtonClicked(UCommonButtonLegacy* Buttton) {
}

FFortDialogDescription_NUI UFortConfirmationWindow::GetConfirmationDescription() const {
    return FFortDialogDescription_NUI{};
}



void UFortConfirmationWindow::BotClickButton() {
}


