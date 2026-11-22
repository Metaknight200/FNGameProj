#include "AthenaChallengePunchCardEntry.h"

UAthenaChallengePunchCardEntry::UAthenaChallengePunchCardEntry() {
    this->IconParamName = TEXT("ItemIcon");
    this->SlotIndex = -1;
    this->bIsBeingPlaced = false;
    this->Text_RewardQuantity = NULL;
    this->Text_UnlockDate = NULL;
    this->LazyImage_Stamp = NULL;
}







void UAthenaChallengePunchCardEntry::OnFinishedPlacingEntry() {
}


