#include "FortCreativeMenuQuickbar.h"

UFortCreativeMenuQuickbar::UFortCreativeMenuQuickbar() {
    this->CurrentItemDefinition = NULL;
    this->CurrentType = EFortCreativeItemType::Item;
    this->Switcher_QuickBars = NULL;
    this->AthenaQuickbar_Creative = NULL;
    this->AthenaQuickbar_Trap = NULL;
    this->AthenaQuickbar_Primary = NULL;
}

void UFortCreativeMenuQuickbar::ShowQuickbar(EFortContentBrowserQuickbarState InQuickbarState) const {
}


void UFortCreativeMenuQuickbar::HandleAddItemToQuickbarAction(EFortQuickBars QuickBarType, const int32 SlotNum, const UFortItemDefinition* ItemDefinition) {
}


