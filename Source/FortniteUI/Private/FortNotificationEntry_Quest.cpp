#include "FortNotificationEntry_Quest.h"

UFortNotificationEntry_Quest::UFortNotificationEntry_Quest() {
    this->GoalCount = 0;
    this->CurrentCount = 0;
    this->PreviousCount = 0;
    this->bNeedsTurnInNotification = false;
    this->LazyImage_SourceIcon = NULL;
    this->Text_Header = NULL;
    this->DateTimeText_TimeRemaining = NULL;
    this->Text_Description = NULL;
    this->RichText_ObjectivesCompleted = NULL;
    this->Text_FlavorText = NULL;
    this->Border_AssistedBy = NULL;
    this->XpSubNotification = NULL;
}



void UFortNotificationEntry_Quest::ShowTurnInNotification() {
}







