#include "FortReplayBrowserRenameDialog.h"

UFortReplayBrowserRenameDialog::UFortReplayBrowserRenameDialog() {
    this->bIsModal = true;
    this->MaxReplayNameLength = 32;
    this->TextBox_Name = NULL;
    this->Button_Confirm = NULL;
    this->Button_Decline = NULL;
    this->Button_TapToClose = NULL;
}

void UFortReplayBrowserRenameDialog::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UFortReplayBrowserRenameDialog::HandleTextChanged(const FText& Text) {
}


