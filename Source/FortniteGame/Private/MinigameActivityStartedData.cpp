#include "MinigameActivityStartedData.h"

FMinigameActivityStartedData::FMinigameActivityStartedData() {
    this->Stat = EMinigameActivityStat::Score;
    this->InitialStatValue = 0.00f;
    this->InitialScore = 0;
    this->TotalScore = 0;
}

