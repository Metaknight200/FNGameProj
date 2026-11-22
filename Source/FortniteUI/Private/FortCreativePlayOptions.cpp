#include "FortCreativePlayOptions.h"

UFortCreativePlayOptions::UFortCreativePlayOptions() {
    this->View_CreativeOptionsServers = NULL;
    this->Button_Play = NULL;
    this->Button_Cancel = NULL;
}

bool UFortCreativePlayOptions::ShouldShowImportPlatformFriendsOption() {
    return false;
}

void UFortCreativePlayOptions::ImportPlatformFriends() {
}

void UFortCreativePlayOptions::HandleCancelClicked() {
}


