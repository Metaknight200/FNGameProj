#include "FortQuestCategory.h"

UFortQuestCategory::UFortQuestCategory() {
    this->bExpanded = true;
}

bool UFortQuestCategory::HasUnseenQuests() {
    return false;
}

int32 UFortQuestCategory::GetUnseenQuestCount() {
    return 0;
}


