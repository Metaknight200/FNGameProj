#include "FortRadialMenu.h"

UFortRadialMenu::UFortRadialMenu() {
    this->bIsFocusable = true;
    this->EntryWidgetClass = NULL;
    this->JoystickDeadZone = 0.50f;
    this->MouseDeadZoneRadiusPercentage = 0.50f;
    this->JoystickMaximumMagnitude = 0.90f;
    this->ControllingStick = EFortRadialControllingStick::Right;
    this->EntryBox_ContextRadial = NULL;
}

int32 UFortRadialMenu::GetNumEntries() const {
    return 0;
}

float UFortRadialMenu::GetDegreeOffset() const {
    return 0.0f;
}

float UFortRadialMenu::GetDegreeIncrements() const {
    return 0.0f;
}

float UFortRadialMenu::GetAngleForIndex(int32 Index) const {
    return 0.0f;
}


