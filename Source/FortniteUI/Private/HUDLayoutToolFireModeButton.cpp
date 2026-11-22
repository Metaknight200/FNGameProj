#include "HUDLayoutToolFireModeButton.h"

UHUDLayoutToolFireModeButton::UHUDLayoutToolFireModeButton() {
    this->FireModeType = EFireModeType::MAX;
    this->FireModeImage = NULL;
    this->SelectionButton = NULL;
    this->MovieWidget = NULL;
}

bool UHUDLayoutToolFireModeButton::ShouldShowVideo() const {
    return false;
}




EFireModeType UHUDLayoutToolFireModeButton::GetFireModeType() const {
    return EFireModeType::Unset;
}

FText UHUDLayoutToolFireModeButton::GetFireModeDescription() const {
    return FText::GetEmpty();
}


