#include "FortSignInWidget.h"

UFortSignInWidget::UFortSignInWidget() {
    this->NormalBorderStyle = NULL;
    this->HighlightBorderStyle = NULL;
    this->ForgotPasswordURL = TEXT("https://accounts.epicgames.com/account/oneTimePassword");
    this->EditText_Email = NULL;
    this->EditText_Password = NULL;
    this->Border_Email = NULL;
    this->Border_Password = NULL;
    this->Button_SignIn = NULL;
    this->Button_ForgotPassword = NULL;
}

void UFortSignInWidget::UpdateSignInButton(const FText& Text) {
}

void UFortSignInWidget::StartSignIn() {
}

void UFortSignInWidget::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}


