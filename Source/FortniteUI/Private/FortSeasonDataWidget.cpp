#include "FortSeasonDataWidget.h"

UFortSeasonDataWidget::UFortSeasonDataWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentProgress = 0.00f;
    this->CurrentXp = 0;
    this->XpToNextLevel = 0;
    this->CurrentLevel = 0;
    this->LevelRewards = NULL;
}






