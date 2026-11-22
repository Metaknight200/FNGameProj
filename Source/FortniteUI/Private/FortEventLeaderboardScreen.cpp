#include "FortEventLeaderboardScreen.h"

UFortEventLeaderboardScreen::UFortEventLeaderboardScreen() {
    this->EventDisplayType = ETournamentDisplayType::Default;
    this->EntryBox_ViewButtons = NULL;
    this->ActionWidget_TabLeft = NULL;
    this->ActionWidget_TabRight = NULL;
    this->Button_ViewLiveGames = NULL;
    this->ViewButtonGroup = NULL;
}





void UFortEventLeaderboardScreen::HandleViewTabSelectionChanged(UCommonButtonLegacy* TabButton, int32 TabIdx) {
}


