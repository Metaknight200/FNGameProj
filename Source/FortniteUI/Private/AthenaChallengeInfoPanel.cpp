#include "AthenaChallengeInfoPanel.h"

UAthenaChallengeInfoPanel::UAthenaChallengeInfoPanel() {
    this->CurrentPage = EChallengeInfoPage::PartyAssist;
    this->MaxSuggestedEntries = 5;
    this->Text_DisplayedChallengeTypes = NULL;
    this->EntryBox_Challenges = NULL;
}

void UAthenaChallengeInfoPanel::HandleQuestsUpdatedInGame() {
}

void UAthenaChallengeInfoPanel::HandleNewContextualObjectives(const TArray<UFortQuestItem*>& Objectives) {
}

void UAthenaChallengeInfoPanel::HandleCycleQuestsInputAction(bool& bPassThrough) {
}


