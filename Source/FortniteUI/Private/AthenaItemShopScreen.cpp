#include "AthenaItemShopScreen.h"

UAthenaItemShopScreen::UAthenaItemShopScreen() {
    this->bAutoRestoreFocus = true;
    this->bShowAvailableMTXBalance = false;
    this->AffiliateModalClass = NULL;
    this->StoreSelectionPopupClass = NULL;
    this->ScrollThreshold = 48.00f;
    this->AffiliateModal = NULL;
    this->StoreSelectionPopup = NULL;
    this->LastPlayedIntroAnimation = NULL;
    this->Overlay_NavigationControl = NULL;
    this->ScrollBox_Sections = NULL;
    this->VBox_Sections = NULL;
    this->InvalidationBox_ItemShop = NULL;
    this->Container_AvailableAmount = NULL;
    this->Navigator_ShopSections = NULL;
    this->SwipePanel_SectionsNavigation = NULL;
    this->EntryBox_SectionsPips = NULL;
    this->Button_SupportACreator = NULL;
    this->Button_ScrollToTop = NULL;
    this->Button_InGameScrollToTop = NULL;
    this->Button_BackToGame = NULL;
    this->Image_DefaultBackground = NULL;
    this->SpecialOfferVideoPlayerClass = NULL;
    this->ButtonGroup_SectionsPips = NULL;
}

void UAthenaItemShopScreen::PlayIntroAnimation(UWidgetAnimation* IntroAnimation) {
}






void UAthenaItemShopScreen::NavigateToOffer(const FString& OfferId, EItemShopNavigationAction NavigationAction) {
}

void UAthenaItemShopScreen::HandleUserMouseUp(float ScrollAmount) {
}

void UAthenaItemShopScreen::HandlePurchaseOfferComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems) {
}

void UAthenaItemShopScreen::EnableShopNavigation(bool bIsNavigationEnabled) {
}


