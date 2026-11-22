#include "InteriorAudioPlayerInfo.h"

FInteriorAudioPlayerInfo::FInteriorAudioPlayerInfo() {
    this->CurrentState = EInteriorAudioState::Indoors;
    this->CurrentAmbientBank = NULL;
    this->PreviousAmbientBank = NULL;
    this->CenterCellActor = NULL;
    this->Quadrant = EInteriorAudioQuadrant::None;
}

