#include "IndicatedActorInfoEntry.h"

FIndicatedActorInfoEntry::FIndicatedActorInfoEntry() {
    this->Actor = NULL;
    this->StartTime = 0.00f;
    this->EndTime = 0.00f;
    this->bReplaceExistingWhenAdded = false;
    this->bRefreshExistingWhenAdded = false;
}

