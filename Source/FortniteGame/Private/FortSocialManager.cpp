#include "FortSocialManager.h"

UFortSocialManager::UFortSocialManager() {
    this->SocialImportPlatform = ESocialImportPanelPlatform::Steam;
    this->bTutorialCompleted = false;
    this->bLeftLastPartyFromGameDisconnect = false;
    this->LocalTeam = NULL;
    this->bEnablePartyJoinReturnToMainMenu = true;
    this->PendingQueryPartyJoinabilityResultTimeout = 30.00f;
    this->CurrentJoinAndSpectateTarget = NULL;
}


