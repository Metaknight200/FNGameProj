#include "HUDElementsToHideData.h"

FHUDElementsToHideData::FHUDElementsToHideData() {
    this->StartHidingGamePhase = EAthenaGamePhase::None;
    this->StartHidingSafeZonePhase = 0;
    this->StopHidingGamePhase = EAthenaGamePhase::None;
    this->StopHidingSafeZonePhase = 0;
}

