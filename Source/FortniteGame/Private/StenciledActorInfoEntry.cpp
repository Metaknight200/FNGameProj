#include "StenciledActorInfoEntry.h"

FStenciledActorInfoEntry::FStenciledActorInfoEntry() {
    this->Actor = NULL;
    this->MarkedBy = NULL;
    this->StartTime = 0.00f;
    this->EndTime = 0.00f;
    this->bReplaceExistingWhenAdded = false;
    this->bRefreshExistingWhenAdded = false;
}

