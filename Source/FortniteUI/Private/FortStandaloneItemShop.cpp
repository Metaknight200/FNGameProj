#include "FortStandaloneItemShop.h"

UFortStandaloneItemShop::UFortStandaloneItemShop() {
    this->EntryBox_TabButtons = NULL;
    this->TabsGroup = NULL;
    this->ActivatableContent_ItemShop = NULL;
    this->ActivatableContent_MtxStore = NULL;
}

void UFortStandaloneItemShop::RegisterTab(const FStandaloneItemShopTabInfo& TabInfo) {
}



void UFortStandaloneItemShop::HandleSelectedTabButtonChanged(UCommonButtonBase* SelectedButton, int32 ButtonIndex) {
}

void UFortStandaloneItemShop::CreateTabs() {
}


