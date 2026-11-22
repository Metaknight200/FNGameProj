#include "AthenaTransientQuestStartedOverlay.h"

UAthenaTransientQuestStartedOverlay::UAthenaTransientQuestStartedOverlay() {
    this->Button_MobileClickCatcher = NULL;
}




void UAthenaTransientQuestStartedOverlay::HandleTransientQuestStarted(const UFortQuestItem* QuestItem, const UFortQuestItemDefinition* PreceedingQuestDef) {
}

float UAthenaTransientQuestStartedOverlay::GetOutroDelay() const {
    return 0.0f;
}


