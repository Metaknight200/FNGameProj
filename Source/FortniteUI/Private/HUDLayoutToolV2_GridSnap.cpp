#include "HUDLayoutToolV2_GridSnap.h"

UHUDLayoutToolV2_GridSnap::UHUDLayoutToolV2_GridSnap() {
    this->bGridSnapEnabled = false;
    this->CheckMarkSprite = NULL;
    this->Text_SettingValue = NULL;
    this->Slider_SettingValue = NULL;
    this->Button_ToggleEnabled = NULL;
    this->ProgressBar_ColoredBackground = NULL;
}

void UHUDLayoutToolV2_GridSnap::HandleSliderValueChanged(float InValue) {
}


