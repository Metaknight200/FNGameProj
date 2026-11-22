#include "FortNotificationEntry.h"

UFortNotificationEntry::UFortNotificationEntry() {
    this->DisplayTime = 1.50f;
    this->MinDisplayTime = 1.00f;
    this->bRushDisplay = false;
    this->RushWidgetThreshold = 3;
    this->LinkedNotification = NULL;
}



void UFortNotificationEntry::NativeStartNotificationOutro() {
}

void UFortNotificationEntry::FinishNotificationOutro() {
}

void UFortNotificationEntry::FinishNotificationIntro() {
}



