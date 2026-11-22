#include "AthenaReloadMtxScreen.h"

UAthenaReloadMtxScreen::UAthenaReloadMtxScreen() {
    this->Button_StarterKitOption = NULL;
    this->ListView_MtxOptions = NULL;
    this->Switcher_AvailableOptions = NULL;
    this->Overlay_AvailableOptions = NULL;
    this->Overlay_NoOptions = NULL;
}

UWidget* UAthenaReloadMtxScreen::GetWidgetToFocusFromOfferList(EUINavigation InNavigation) const {
    return NULL;
}


