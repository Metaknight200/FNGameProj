#include "FortOptionsMenuSetting.h"

UFortOptionsMenuSetting::UFortOptionsMenuSetting() {
    this->SettingType = ESettingType::None;
    this->TabTooltipText = NULL;
    this->MinIntegralDigits = 0;
    this->MaxIntegralDigits = 0;
    this->MinFractionalDigits = 0;
    this->MaxFractionalDigits = 0;
    this->MinSensitivityValue = 0.00f;
    this->MaxSensitivityValue = 0.00f;
    this->PreviousSettingValue = 0.00f;
    this->bDisplayRenderScale = false;
    this->HideLabelText = false;
    this->HideSpaceRight = false;
    this->Slider_Menu = NULL;
}


void UFortOptionsMenuSetting::UpdateSetting(UCommonTextBlock* TooltipTextBlock) {
}

void UFortOptionsMenuSetting::HandleCaptureEnd() {
}

void UFortOptionsMenuSetting::HandleAnalogCaptureEnd(float Value) {
}

void UFortOptionsMenuSetting::CenterOnWidget() {
}


