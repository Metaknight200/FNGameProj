#include "DataAssetDirectoryManager.h"

UDataAssetDirectoryManager::UDataAssetDirectoryManager() {
    this->bUpdateCheckPending = false;
    this->UpdateCheckLimitSeconds = 30;
    this->bEnabled = true;
    this->bFailOnError = true;
    this->bAnalyticsEnabled = true;
}


