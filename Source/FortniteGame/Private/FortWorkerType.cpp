#include "FortWorkerType.h"
#include "EFortItemType.h"

UFortWorkerType::UFortWorkerType() {
    this->ItemType = EFortItemType::Worker;
    this->bInventorySizeLimited = true;
    this->Gender = EFortCustomGender::Female;
    this->bIsManager = false;
    this->MatchingPersonalityBonus = 1;
    this->MismatchingPersonalityPenalty = -1;
}


