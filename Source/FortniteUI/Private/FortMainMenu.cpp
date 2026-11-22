#include "FortMainMenu.h"

UFortMainMenu::UFortMainMenu() {
    this->Text_CountDownTimer = NULL;
    this->Button_MobileBack = NULL;
    this->LeaveButton = NULL;
    this->ContextualHelpText = NULL;
}


TSoftClassPtr<UUserWidget> UFortMainMenu::GetOutpostPermissionsWidgetClass() {
    return NULL;
}


