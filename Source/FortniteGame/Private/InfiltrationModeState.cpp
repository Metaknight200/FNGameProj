#include "InfiltrationModeState.h"

FInfiltrationModeState::FInfiltrationModeState() {
    this->IntelDownloaded = 0;
    this->IntelCaptured = 0;
    this->TotalTime = 0.00f;
    this->TotalGroundTime = 0.00f;
    this->CurrentRound = 0;
    this->bGameOver = false;
}

