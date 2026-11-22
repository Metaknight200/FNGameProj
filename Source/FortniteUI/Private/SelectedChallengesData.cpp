#include "SelectedChallengesData.h"

FSelectedChallengesData::FSelectedChallengesData() {
    this->bIsCompleted = false;
    this->bIsLocked = false;
    this->bHasIconOverride = false;
    this->Progress = 0.00f;
    this->NumObjectivesCompleted = 0;
    this->NumObjectives = 0;
}

