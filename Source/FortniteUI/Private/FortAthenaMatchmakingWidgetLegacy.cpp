#include "FortAthenaMatchmakingWidgetLegacy.h"

UFortAthenaMatchmakingWidgetLegacy::UFortAthenaMatchmakingWidgetLegacy() {
    this->NewModeStyleOverride = EFortMatchmakingViolatorStyle::None;
    this->bPlaylistHasSquadFillOption = false;
    this->bHasPlaylistPrivateMatchOption = false;
    this->Button_Play = NULL;
    this->Button_Cancel = NULL;
    this->Button_StartMatch = NULL;
    this->Button_CancelContentDownload = NULL;
    this->Button_MatchmakingMode = NULL;
    this->ContentBeaconDownloadContainer = NULL;
    this->ContentDownloadProgressBar = NULL;
    this->TextBlock_MatchmakingHeader = NULL;
    this->TextBlock_MatchmakingMessage = NULL;
    this->TextBlock_PartySizeWarning = NULL;
    this->OptionalTextBlock_BlackoutCountdown = NULL;
    this->Text_FillStatus = NULL;
    this->Text_PrivateMatch = NULL;
    this->Button_SquadFill = NULL;
    this->Button_PrivateMatch = NULL;
}












bool UFortAthenaMatchmakingWidgetLegacy::IsSquadFillEnabled() const {
    return false;
}

bool UFortAthenaMatchmakingWidgetLegacy::IsPrivateMatchEnabled() const {
    return false;
}

FText UFortAthenaMatchmakingWidgetLegacy::GetButtonPublicMatchText_Implementation() const {
    return FText::GetEmpty();
}

FText UFortAthenaMatchmakingWidgetLegacy::GetButtonPrivateMatchText_Implementation() const {
    return FText::GetEmpty();
}


