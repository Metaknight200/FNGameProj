#include "FortGamepadBasicOptions.h"

FFortGamepadBasicOptions::FFortGamepadBasicOptions() {
    this->LookSensitivityPreset = EFortGamepadSensitivity::Invalid;
    this->LookSensitivityPresetAds = EFortGamepadSensitivity::Invalid;
    this->LookBuildModeMultiplier = 0.00f;
    this->LookEditModeMultiplier = 0.00f;
    this->bUseAdvancedOptions = false;
}

