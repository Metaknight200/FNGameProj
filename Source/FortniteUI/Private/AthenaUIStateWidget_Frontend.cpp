#include "AthenaUIStateWidget_Frontend.h"

UAthenaUIStateWidget_Frontend::UAthenaUIStateWidget_Frontend() {
    this->DefaultFlowStepArray.AddDefaulted(14);
    this->FirstTimeSeasonFlowStepArray.AddDefaulted(9);
    this->GuidedTutorialFakeLoadingScreenClass = NULL;
    this->MOTDWidgetClass = NULL;
    this->SocialImportPanelClass = NULL;
    this->ConfirmationWindowClass = NULL;
    this->MiniMapManagerClass = NULL;
    this->MapScreenContainerClass = NULL;
    this->PlayerBannedScreenClass = NULL;
    this->PlayerSurveyDispatcher = NULL;
    this->MapScreen = NULL;
    this->bVideoActive = false;
    this->TopBar_Widget = NULL;
    this->BottomBar = NULL;
    this->ChatPanel_Widget = NULL;
    this->Button_ToggleChat = NULL;
    this->DualBladeMenu_Widget = NULL;
    this->NextGiftBox = NULL;
}



void UAthenaUIStateWidget_Frontend::SetVideoActive(bool bActive) {
}


bool UAthenaUIStateWidget_Frontend::NeedSeeTrailerMovie(bool bAllowUpdate, bool bSkipUserSettingCheck) const {
    return false;
}


void UAthenaUIStateWidget_Frontend::HandleToggleFullscreenMap(bool bFullscreenMapVisible) {
}

void UAthenaUIStateWidget_Frontend::HandleSeasonTrailerPlayed() {
}

void UAthenaUIStateWidget_Frontend::HandleSeasonTrailerEnded() {
}

UFortPlayerSurveyDispatcher* UAthenaUIStateWidget_Frontend::GetPlayerSurveyDispatcher() const {
    return PlayerSurveyDispatcher;
}



