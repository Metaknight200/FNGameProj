#include "FortDailyChallengeStickyNoteWidget.h"

UFortDailyChallengeStickyNoteWidget::UFortDailyChallengeStickyNoteWidget() {
    this->MyDailyChallengeIndex = -1;
    this->Button_RerollChallenge = NULL;
    this->RichText_ChallengeDesc = NULL;
    this->RichText_Progress = NULL;
    this->SizeBox_ContentEnforcedSize = NULL;
    this->RichText_NextChallengeTime = NULL;
    this->ConfirmationWindowClass = NULL;
}



void UFortDailyChallengeStickyNoteWidget::HandleDailyQuestRerolled(const UFortQuestItem* NewQuest) {
}


