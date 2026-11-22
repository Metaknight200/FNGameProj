#include "FortLocalUserEntry.h"

UFortLocalUserEntry::UFortLocalUserEntry() {
    this->LocalUserSettingsMenuClass = NULL;
    this->LocalUserSettingsMenu = NULL;
    this->SocialAvatarIcon = NULL;
    this->Image_Crown = NULL;
    this->Text_UserName = NULL;
    this->Text_VoiceChannel = NULL;
    this->MenuAnchor_LocalUserSettingMenu = NULL;
}


void UFortLocalUserEntry::HandleMenuOpenChanged(bool bIsOpen) {
}

UUserWidget* UFortLocalUserEntry::HandleGetMenuContent() {
    return NULL;
}


