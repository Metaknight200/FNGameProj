#include "AthenaChallengePunchCard.h"

UAthenaChallengePunchCard::UAthenaChallengePunchCard() {
    this->bIsFocusable = true;
    this->MaxPunchesAllowed = 6;
    this->Box_PunchSlots = NULL;
    this->Text_Title = NULL;
    this->Text_Description = NULL;
    this->bInitializedWidgetPool = false;
    this->bBundleIsKnown = false;
    this->bBangShown = false;
}

void UAthenaChallengePunchCard::UpdateChallengePunchCard(const UFortChallengeBundleItem* Bundle, const UFortQuestItem* CopmpletedQuest) {
}


void UAthenaChallengePunchCard::TryToClearBangState() {
}











