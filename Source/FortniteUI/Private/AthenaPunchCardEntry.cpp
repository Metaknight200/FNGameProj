#include "AthenaPunchCardEntry.h"

UAthenaPunchCardEntry::UAthenaPunchCardEntry() {
    this->Index = -1;
    this->bDisableFinishPlacementDelegate = false;
    this->Text_RewardQuantity = NULL;
    this->Text_RewardQuantity_Recap = NULL;
}



void UAthenaPunchCardEntry::OnFinishedPlacingNewMedal() {
}


