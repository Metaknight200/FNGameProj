#include "FortChallengeBundleQuestEntry.h"

FFortChallengeBundleQuestEntry::FFortChallengeBundleQuestEntry() {
    this->QuestUnlockType = EChallengeBundleQuestUnlockType::Manually;
    this->bStartActive = false;
    this->bIsPrerequisite = false;
    this->bShowQuestDetailsWhenLocked = false;
    this->UnlockValue = 0;
}

