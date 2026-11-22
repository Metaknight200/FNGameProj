#include "AthenaViewStreamingReplayModalBase.h"

UAthenaViewStreamingReplayModalBase::UAthenaViewStreamingReplayModalBase() {
    this->EditableText_SessionSearch = NULL;
}

void UAthenaViewStreamingReplayModalBase::PlayStreamingDSSReplay(const FString& GameSessionId) const {
}

bool UAthenaViewStreamingReplayModalBase::IsValidGameSessionId(const FString& GameSessionId) const {
    return false;
}


