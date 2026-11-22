#include "SeasonPassLevelPanel.h"

USeasonPassLevelPanel::USeasonPassLevelPanel() {
    this->LevelInfo = NULL;
}

void USeasonPassLevelPanel::Setup(UFortSeasonPassLevelInfo* Info) {
}



UFortSeasonPassLevelInfo* USeasonPassLevelPanel::GetLevelInfo() const {
    return LevelInfo;
}


