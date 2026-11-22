#include "AthenaLobbyBase.h"

UAthenaLobbyBase::UAthenaLobbyBase() {
    this->Content_MatchmakingWidget = NULL;
    this->Notice_Emergency = NULL;
    this->FortAthenaMOTDTeaserWidget_Main = NULL;
    this->LobbyDetails_Default = NULL;
    this->LobbyDetails_Tournament = NULL;
    this->LobbyDetails_ShowdownDivision = NULL;
    this->ChallengeInfo_Widget = NULL;
    this->MissionInfo_Widget = NULL;
    this->Switcher_LobbyDetailsMode = NULL;
    this->Button_GenericLink = NULL;
    this->Button_ShadowPlayHighlights = NULL;
    this->SeasonalResources = NULL;
    this->CatalogMessaging = NULL;
    this->SquadFormationClass = NULL;
    this->DefaultMatchmakingWidgetClass = NULL;
    this->MatchmakingWidget = NULL;
}





void UAthenaLobbyBase::HandlePickerOpenRequest(EFortPickerMode Mode, int32 InitialOption, bool bIgnoreFirstAccept) {
}

void UAthenaLobbyBase::HandleActiveWidgetChanged(UWidget* NewActiveWidget, int32 WidgetIndex) {
}




