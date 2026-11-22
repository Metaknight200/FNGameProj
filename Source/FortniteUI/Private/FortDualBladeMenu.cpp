#include "FortDualBladeMenu.h"

UFortDualBladeMenu::UFortDualBladeMenu() {
    this->bIsModal = true;
    this->bAutoRestoreFocus = true;
    this->BladeMenu_SocialPanel = NULL;
    this->BladeMenu_MainMenu = NULL;
    this->Button_BackBoard = NULL;
}

void UFortDualBladeMenu::HandleAccountPickerResult(int32 ControllerId, bool bUserSwitched) {
}


