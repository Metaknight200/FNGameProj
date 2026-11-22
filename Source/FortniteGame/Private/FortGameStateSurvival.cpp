#include "FortGameStateSurvival.h"

AFortGameStateSurvival::AFortGameStateSurvival(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowedToUpdateBackendDifficulty = true;
    this->bFireEndOfDayDelegate = true;
    this->TimeToDelayEndOfDayZoneScoreWidgetDisplay = 0.50f;
}

void AFortGameStateSurvival::SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo) {
}


