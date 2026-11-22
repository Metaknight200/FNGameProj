#include "FortPlayerInputAthena.h"

UFortPlayerInputAthena::UFortPlayerInputAthena() {
    this->DebugExecBindings.AddDefaulted(30);
    this->CampaignKBMResetToDefaultPresetNames.AddDefaulted(2);
    this->AthenaKBMResetToDefaultPresetNames.AddDefaulted(2);
    this->FortPlayerInputSettingsNames.AddDefaulted(16);
    this->GamepadSettings = NULL;
}


