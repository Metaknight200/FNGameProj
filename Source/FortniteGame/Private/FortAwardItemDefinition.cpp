#include "FortAwardItemDefinition.h"
#include "EFortItemType.h"

UFortAwardItemDefinition::UFortAwardItemDefinition() {
    this->ItemType = EFortItemType::MatchAward;
    this->bAllowMultipleStacks = false;
    this->GrantToProfileType = TEXT("athena");
    this->bSingleSharedDetector = false;
    this->bCanEarnMultipleTimes = false;
    this->DetectorClass = NULL;
}


