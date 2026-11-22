#include "AthenaReplayActionFeedScreenBase.h"

UAthenaReplayActionFeedScreenBase::UAthenaReplayActionFeedScreenBase() {
    this->bIsModal = true;
    this->ListView_Entries = NULL;
    this->Button_Close = NULL;
}

void UAthenaReplayActionFeedScreenBase::OnReplayEventsUpdated(EPlayEventType Type) {
}

void UAthenaReplayActionFeedScreenBase::HandlePlayerBecameRelevant(AFortPlayerState* FortPlayerState) {
}

void UAthenaReplayActionFeedScreenBase::HandleCloseActionFeed() {
}


