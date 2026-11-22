#include "FortMainTabsScreenBase.h"

UFortMainTabsScreenBase::UFortMainTabsScreenBase() {
    this->TopTabContainer = NULL;
    this->TopTabList = NULL;
    this->MainTabSet = NULL;
}



void UFortMainTabsScreenBase::HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason) {
}

void UFortMainTabsScreenBase::HandleFeatureNavigateRequest(EFortUIFeature Feature) {
}

void UFortMainTabsScreenBase::ConstructTabs() {
}


