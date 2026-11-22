#include "BattlePassScreenBase.h"

UBattlePassScreenBase::UBattlePassScreenBase() {
    this->CurrentView = EBattlePassView::None;
    this->SeasonData = NULL;
    this->CachedVaultWorld = NULL;
    this->CurrentDisplayedItem = NULL;
    this->LastViewedItem = NULL;
    this->CyclingCosmeticItem = NULL;
    this->CyclingItem = NULL;
}

bool UBattlePassScreenBase::ShouldPlayBPVideo(bool bAllowUpdate) {
    return false;
}










int32 UBattlePassScreenBase::GetNumberOfRewardsToPurchase() const {
    return 0;
}


