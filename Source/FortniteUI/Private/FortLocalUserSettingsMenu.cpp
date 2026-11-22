#include "FortLocalUserSettingsMenu.h"

UFortLocalUserSettingsMenu::UFortLocalUserSettingsMenu() {
    this->bIsBackHandler = true;
    this->OwningMenuAnchor = NULL;
    this->Section_OnlineStatus = NULL;
    this->Section_Privacy = NULL;
    this->Section_Participation = NULL;
    this->Section_VoiceChannel = NULL;
    this->Section_FriendSubscription = NULL;
}


void UFortLocalUserSettingsMenu::HandleMenuAnchorOpenChanged(bool bIsOpen) {
}


