#include "AthenaItemShopOfferInspectionNavigator.h"

UAthenaItemShopOfferInspectionNavigator::UAthenaItemShopOfferInspectionNavigator() {
    this->bAutoActivate = true;
    this->bSupportsActivationFocus = false;
    this->OwningOfferInspectionWidget = NULL;
    this->Button_Next = NULL;
    this->Button_Previous = NULL;
}

void UAthenaItemShopOfferInspectionNavigator::SetArrowsEnabled(bool bEnabled) {
}

void UAthenaItemShopOfferInspectionNavigator::RequestPreviousOffer() {
}

void UAthenaItemShopOfferInspectionNavigator::RequestNextOffer() {
}


