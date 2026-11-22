#include "MinigameActivityEndedData.h"

FMinigameActivityEndedData::FMinigameActivityEndedData() {
    this->bSuccessfullyCompleted = false;
    this->Stat = EMinigameActivityStat::Score;
    this->FinalStatValue = 0.00f;
    this->FinalStatBestValue = 0.00f;
    this->FinalScore = 0;
    this->TotalScore = 0;
    this->Rank = 0;
}

