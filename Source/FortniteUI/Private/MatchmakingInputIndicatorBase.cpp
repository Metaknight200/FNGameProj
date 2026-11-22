#include "MatchmakingInputIndicatorBase.h"

UMatchmakingInputIndicatorBase::UMatchmakingInputIndicatorBase() {
    this->InputSource = EMatchmakingInputSource::Local;
    this->bShowLocalInputOnlyWhenDifferentFromDefault = false;
    this->bShowRemoteInputOnlyWhenDifferentFromDefault = false;
    this->LastInputType = ECommonInputType::Count;
    this->SizeBox_HotfixVisibility = NULL;
}

void UMatchmakingInputIndicatorBase::SetRemotePlayer(FUniqueNetIdRepl UniqueId) {
}



