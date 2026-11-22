#include "DLSSOverrideSettings.h"

UDLSSOverrideSettings::UDLSSOverrideSettings() {
    this->EnableDLSSInEditorViewportsOverride = EDLSSSettingOverride::UseProjectSettings;
    this->EnableScreenpercentageManipulationInDLSSEditorViewportsOverride = EDLSSSettingOverride::UseProjectSettings;
    this->EnableDLSSInPlayInEditorViewportsOverride = EDLSSSettingOverride::UseProjectSettings;
}


