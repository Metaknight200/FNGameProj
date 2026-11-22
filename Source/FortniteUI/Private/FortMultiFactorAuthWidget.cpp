#include "FortMultiFactorAuthWidget.h"

UFortMultiFactorAuthWidget::UFortMultiFactorAuthWidget() {
    this->Button_Continue = NULL;
    this->Button_Cancel = NULL;
    this->Text_Error = NULL;
    this->EditText_MultiFactorCode = NULL;
    this->Text_Prompt = NULL;
}

void UFortMultiFactorAuthWidget::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}


