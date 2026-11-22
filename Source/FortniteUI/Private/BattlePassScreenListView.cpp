#include "BattlePassScreenListView.h"

UBattlePassScreenListView::UBattlePassScreenListView() : Super(FObjectInitializer::Get()) {
    this->bEnableScrollAnimation = true;
    this->StartSpacing = 8.00f;
    this->EndSpacing = 16.00f;
    this->CycleSocialPlayerRate = 5.00f;
}


