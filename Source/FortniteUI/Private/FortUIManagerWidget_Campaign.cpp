#include "FortUIManagerWidget_Campaign.h"

UFortUIManagerWidget_Campaign::UFortUIManagerWidget_Campaign() {
    this->NavigationManager = NULL;
}

UFortUINavigationManager* UFortUIManagerWidget_Campaign::GetUINavigationManager(UObject* WorldContextObject) {
    return NULL;
}

UFortUINavigationManager* UFortUIManagerWidget_Campaign::GetNavigationManager() const {
    return NavigationManager;
}


