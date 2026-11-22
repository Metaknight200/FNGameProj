#include "FortTabGamepadOptions.h"

UFortTabGamepadOptions::UFortTabGamepadOptions() {
    this->InputCommonListView = NULL;
    this->TooltipDisplay = NULL;
    this->InputCategoryWidgetClass = NULL;
    this->Button_AdvancedSettingsToggle = NULL;
}

void UFortTabGamepadOptions::ToggleAdvancedSettingsDisplay(bool bShowAdvancedSettings) {
}

void UFortTabGamepadOptions::ResetSettingsToDefault() {
}

bool UFortTabGamepadOptions::IsAdvancedSettingsEnabled() {
    return false;
}

UWidget* UFortTabGamepadOptions::GetListWidget(UObject* Item) {
    return NULL;
}


