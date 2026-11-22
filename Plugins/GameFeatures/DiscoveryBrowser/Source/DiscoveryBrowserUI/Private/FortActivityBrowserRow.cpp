#include "FortActivityBrowserRow.h"

UFortActivityBrowserRow::UFortActivityBrowserRow() {
    this->Text_CategoryName = NULL;
    this->ScrollBox_Activities = NULL;
    this->ListView_Activities = NULL;
    this->Button_PageLeft = NULL;
    this->Button_PageRight = NULL;
    this->MobileScrollThresholdX = 40.00f;
    this->MobileScrollThresholdY = 40.00f;
}







void UFortActivityBrowserRow::HandleUserScrolled(float CurrentOffset) {
}

void UFortActivityBrowserRow::HandleMobileScrollCompleted(FVector2D PendingScrollAmounts) {
}

bool UFortActivityBrowserRow::GetIsInPeekState() const {
    return false;
}

bool UFortActivityBrowserRow::GetIsActive() const {
    return false;
}


