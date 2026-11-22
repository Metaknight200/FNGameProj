#include "FortEditableFilteredCountedTextBox.h"

UFortEditableFilteredCountedTextBox::UFortEditableFilteredCountedTextBox() : UUserWidget(FObjectInitializer::Get()) {
    this->EntryCharLimit = 150;
    this->VirtualKeyboardTrigger = EVirtualKeyboardTrigger::OnFocusByPointer;
    this->EnforcedEntryCharLimit = -1;
    this->bReplaceUserTextWithSanitizedString = true;
    this->bAllowSanitizedStrings = false;
    this->bUseToxicityServiceSanitization = false;
    this->bCurrentlyValid = true;
    this->EditText = NULL;
    this->Text_CharCount = NULL;
}

void UFortEditableFilteredCountedTextBox::SetEntryCharLimit_Implementation(int32 InCharLimit) {
}


void UFortEditableFilteredCountedTextBox::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UFortEditableFilteredCountedTextBox::HandleTextChanged(const FText& Text) {
}


