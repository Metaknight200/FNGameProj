#include "FortFloatSliderVariantPicker.h"

UFortFloatSliderVariantPicker::UFortFloatSliderVariantPicker() {
    this->CommitDelay = 0.25f;
    this->FloatVariant = NULL;
    this->Text_VariantName = NULL;
    this->Text_Value = NULL;
    this->Slider_Value = NULL;
}


void UFortFloatSliderVariantPicker::HandleSliderValueChanged(float Value) {
}


