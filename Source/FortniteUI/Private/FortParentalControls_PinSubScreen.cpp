#include "FortParentalControls_PinSubScreen.h"

UFortParentalControls_PinSubScreen::UFortParentalControls_PinSubScreen() {
    this->Button_SubmitPin = NULL;
    this->Text_Pin_FailReason = NULL;
    this->EditableText_Pin_Entry = NULL;
    this->EditableText_Pin_SecondEntry = NULL;
}

void UFortParentalControls_PinSubScreen::HandleEnterPinTextChanged(const FText& InText) {
}


