#include "BattlePassScreenS17.h"

UBattlePassScreenS17::UBattlePassScreenS17() {
    this->ResourcePurchaseScreenClass = NULL;
    this->Button_Close = NULL;
    this->Button_CloseMobile = NULL;
    this->Button_BulkBuyRewards = NULL;
    this->Button_ToggleViewDetails = NULL;
    this->Button_ToggleViewDetails_Mobile = NULL;
    this->Button_ReplayTrailer = NULL;
    this->Button_ReplayTrailer_Mobile = NULL;
    this->Button_ShowAbout = NULL;
    this->Button_ShowAbout_Mobile = NULL;
    this->Button_ShowAboutCustomization = NULL;
    this->Button_ShowAboutCustomization_Mobile = NULL;
    this->MobileVisibilitySwitcher = NULL;
    this->BattlePassCurrencyPanel = NULL;
    this->AthenaExclusiveRewardBanner = NULL;
    this->Text_Description = NULL;
    this->Text_ItemName = NULL;
    this->ItemRewardTag = NULL;
    this->Text_SetDetails = NULL;
    this->Switcher_ContextualButtons = NULL;
    this->Button_BuyLevels = NULL;
    this->Button_BuyBattlePass = NULL;
    this->Button_ClaimReward = NULL;
    this->Tag_RequiresBP = NULL;
    this->Tag_PageLocked = NULL;
    this->Tag_BaseItem = NULL;
    this->Tag_Prerequisite = NULL;
    this->Tag_NotEnough_Currency = NULL;
    this->Tag_Cost = NULL;
    this->Tag_Owned = NULL;
    this->Tag_Delayed = NULL;
    this->SeasonData_BattleStar = NULL;
    this->CurrentSelectedEntry = NULL;
    this->SubPageSwitcher = NULL;
    this->BattleStarsTooltipHideLevel = 5;
    this->TutorialTooltip_BattleStars = NULL;
    this->TutorialTooltip_AlienArtifacts = NULL;
}

void UBattlePassScreenS17::OverviewShowAnimationFinished() {
}










void UBattlePassScreenS17::HandleSwitcherVisibilityShown() {
}

void UBattlePassScreenS17::HandleClaimRewardComplete(const bool bSuccess, const TArray<FString>& OfferTemplateIdList) {
}

FTimespan UBattlePassScreenS17::GetQuestPageDelay() const {
    return FTimespan{};
}


