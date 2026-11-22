#include "FortStandaloneFrontend.h"

UFortStandaloneFrontend::UFortStandaloneFrontend() {
    this->bCosmeticRefreshOnClose = false;
    this->PocketLevel = NULL;
    this->PocketLevelInstance = NULL;
    this->Switcher_TabContent = NULL;
    this->Content_LoadingIndicator = NULL;
    this->Button_CloseMobile = NULL;
}

void UFortStandaloneFrontend::TriggerIncrementalGC() {
}




void UFortStandaloneFrontend::HandleCloseRefreshComplete(AFortPlayerPawn* FortPawn) {
}

void UFortStandaloneFrontend::HandleCloseAction() {
}


