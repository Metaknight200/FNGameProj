#include "FortRootViewportLayout_Athena.h"

UFortRootViewportLayout_Athena::UFortRootViewportLayout_Athena() {
    this->WebPurchaseScreenWidgetClass = NULL;
    this->WebPurchaseWidget_RuntimeSpawned = NULL;
}

void UFortRootViewportLayout_Athena::PurchasingWidgetDisplayCallback(UWidget* WebWidget, const FString& OfferId) {
}

void UFortRootViewportLayout_Athena::PurchasingWidgetDismissedCallback() {
}


