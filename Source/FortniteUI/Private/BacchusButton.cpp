#include "BacchusButton.h"

UBacchusButton::UBacchusButton() {
    this->DefaultIcon = NULL;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->ButtonSize = 200.00f;
    this->ButtonDisplayScale = 1.00f;
    this->ShowRadialProgress = false;
    this->Image_Background = NULL;
    this->SizeBox_ButtonSize = NULL;
    this->SizeBox_ImageSize = NULL;
    this->Image_Icon = NULL;
    this->RadialButton_ButtonCooldown = NULL;
    this->Button_InternalButton = NULL;
}

void UBacchusButton::SetIconPressed(bool bIsPressed) {
}

void UBacchusButton::SetDefaultIcon(UPaperSprite* Icon) {
}

void UBacchusButton::SetButtonSprite_Implementation(UPaperSprite* NewSprite) {
}

void UBacchusButton::SetButtonSize_Implementation(float NewButtonSize) {
}

void UBacchusButton::SetButtonDisplayScale_Implementation(float NewDisplayScale) {
}

void UBacchusButton::OnClicked_Implementation() {
}

void UBacchusButton::HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget) {
}


