#include "FortGameEventNotifications.h"

UFortGameEventNotifications::UFortGameEventNotifications() {
    this->DefaultEntryClass = NULL;
    this->bHasPrioritizedWidgetFocus = false;
    this->bShowFeatQuests = false;
    this->bFeatShowNonVisibleObjectives = false;
    this->ActiveWidget = NULL;
    this->NotificationUpdatesBox = NULL;
}

void UFortGameEventNotifications::HandlePlayerLevelUp(int32 NewLevel) {
}

void UFortGameEventNotifications::HandleNotificationUpdateFinished() {
}

void UFortGameEventNotifications::HandleDisplayDynamicQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate) {
}


