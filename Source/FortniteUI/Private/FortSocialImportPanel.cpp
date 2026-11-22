#include "FortSocialImportPanel.h"

UFortSocialImportPanel::UFortSocialImportPanel() {
    this->Switcher_AddFriends = NULL;
    this->Button_Import = NULL;
    this->Button_Cancel = NULL;
    this->Button_Add = NULL;
    this->Button_NotNow = NULL;
    this->Button_OptOut = NULL;
    this->Border_OuterBorder = NULL;
}

void UFortSocialImportPanel::ShowPanel() {
}







bool UFortSocialImportPanel::GetSocialPlatform(ESocialImportPanelPlatform& OutPlatform) const {
    return false;
}


