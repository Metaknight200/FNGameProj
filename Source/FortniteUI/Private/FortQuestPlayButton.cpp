#include "FortQuestPlayButton.h"

UFortQuestPlayButton::UFortQuestPlayButton() {
    this->QuestItem = NULL;
}






bool UFortQuestPlayButton::CanPlayQuest() const {
    return false;
}

bool UFortQuestPlayButton::CanNavigateToQuestObjective() const {
    return false;
}

void UFortQuestPlayButton::AttemptToPlayQuest() {
}


