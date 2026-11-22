#include "FortInteriorAudioSubsystem.h"

UFortInteriorAudioSubsystem::UFortInteriorAudioSubsystem() {
    this->Settings = NULL;
    this->FPC = NULL;
    this->BuildingGrid = NULL;
}

void UFortInteriorAudioSubsystem::SetEnabled(bool bNewEnabled) {
}

FInteriorAudioPlayerInfo UFortInteriorAudioSubsystem::GetPlayerInfo() const {
    return FInteriorAudioPlayerInfo{};
}


