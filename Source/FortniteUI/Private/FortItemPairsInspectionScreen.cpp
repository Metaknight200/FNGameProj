#include "FortItemPairsInspectionScreen.h"

UFortItemPairsInspectionScreen::UFortItemPairsInspectionScreen() {
    this->Button_Back = NULL;
    this->Button_MobileClose = NULL;
    this->Switcher_PresentationMode = NULL;
    this->Widget_ItemList = NULL;
    this->Widget_VariantList = NULL;
    this->Widget_ItemInfoHeader = NULL;
    this->ItemPopup_Details = NULL;
    this->UnlockingInfo = NULL;
    this->DefaultVariantCyclingDelay = 4.00f;
    this->TimeBetweenVariants = 3.00f;
    this->PresentedItemDefinition = NULL;
    this->PresentationMode = EPresentationMode::ItemList;
}



UFortItemBaseWidget* UFortItemPairsInspectionScreen::GetItemInfoHeader() const {
    return NULL;
}



