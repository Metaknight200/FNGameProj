#include "AthenaSpecialEventStartedOverlay.h"

UAthenaSpecialEventStartedOverlay::UAthenaSpecialEventStartedOverlay() {
    this->AttachedPlayerState = NULL;
}




void UAthenaSpecialEventStartedOverlay::HandleShowUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData, const float EventTimeRemaining) {
}

void UAthenaSpecialEventStartedOverlay::HandleDisplayDynamicQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate) {
}

float UAthenaSpecialEventStartedOverlay::GetOutroDelay() const {
    return 0.0f;
}


