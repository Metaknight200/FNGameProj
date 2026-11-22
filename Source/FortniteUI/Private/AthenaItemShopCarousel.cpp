#include "AthenaItemShopCarousel.h"

UAthenaItemShopCarousel::UAthenaItemShopCarousel() {
    this->Container_CurrentTile = NULL;
    this->Container_NextTileToShow = NULL;
    this->MobileClickThroughButton = NULL;
    this->HBox_NavigationButtons = NULL;
    this->Text_NextItem = NULL;
    this->Text_PreviousItem = NULL;
    this->Image_AutoScrollProgress = NULL;
    this->EntryBox_Pips = NULL;
    this->SwipePanel_ItemsNavigation = NULL;
    this->ButtonGroup_Pips = NULL;
    this->SelectedItemIndex = -1;
    this->NextTileToShow = NULL;
    this->CurrentTile = NULL;
}

void UAthenaItemShopCarousel::SelectPrevItem() {
}

void UAthenaItemShopCarousel::SelectNextItem() {
}

void UAthenaItemShopCarousel::SelectItemAtIndex(int32 ItemIndex) {
}



void UAthenaItemShopCarousel::OnTransitionCompleted() {
}



int32 UAthenaItemShopCarousel::GetSelectedIndex() const {
    return 0;
}


