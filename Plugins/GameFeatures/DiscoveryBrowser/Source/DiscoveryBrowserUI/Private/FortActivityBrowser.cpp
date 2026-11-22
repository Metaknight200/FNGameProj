#include "FortActivityBrowser.h"

UFortActivityBrowser::UFortActivityBrowser() {
    this->Switcher_ActivityBrowserViews = NULL;
    this->Button_Back = NULL;
    this->Button_ShowCustomMatchmakingModal = NULL;
    this->Button_BackToTop = NULL;
    this->Button_MobileShowGameDetails = NULL;
    this->Button_MobileAccept = NULL;
    this->Button_MobileClose = NULL;
    this->Button_JoinAsSpectator = NULL;
    this->Button_ShowSpectateMatchModal = NULL;
    this->TabList_BrowserTabs = NULL;
    this->TabButtonClass = NULL;
    this->ActivityDetailsModalClass = NULL;
}


void UFortActivityBrowser::HandleTabChanged(FName TabId) {
}


