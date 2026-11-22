#include "FortLocalPlayer.h"

UFortLocalPlayer::UFortLocalPlayer() {
    this->FortOnlineAccount = NULL;
    this->ClientSettingsRecord = NULL;
    this->ContentControlsManager = NULL;
    this->bControllerAttached = true;
    this->PoiTracker = NULL;
}

UFortGameUserSettings* UFortLocalPlayer::GetLocalSettings() const {
    return NULL;
}

UFortContentControlsManager* UFortLocalPlayer::GetContentControlsManagerEvenIfUninitialized() const {
    return NULL;
}

UFortContentControlsManager* UFortLocalPlayer::GetContentControlsManager() const {
    return NULL;
}

UFortClientSettingsRecord* UFortLocalPlayer::GetClientSettings() const {
    return NULL;
}


