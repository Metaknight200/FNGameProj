#include "MissionTimeDisplayData.h"

FMissionTimeDisplayData::FMissionTimeDisplayData() {
    // Initialize reflected value fields omitted by the dump.
    this->BaseColor = FLinearColor::Transparent;
    this->PulseColor = FLinearColor::Transparent;
    this->LessThanTimeValue = 0.00f;
    this->bHideTimer = false;
    this->ColorPulsesPerSecond = 0.00f;
}

