#include "AthenaPassPurchaseScreen.h"

UAthenaPassPurchaseScreen::UAthenaPassPurchaseScreen() {
    this->DelaySubscriptionIntroLength = 2.00f;
    this->Button_LegalInfo = NULL;
    this->Button_InspectPackItems = NULL;
    this->Button_MobileInspectPackItems = NULL;
    this->MTXButton_PurchaseScreen = NULL;
    this->Text_SubscriptionDisclaimer = NULL;
    this->Text_PurchasesButtonDisclaimer = NULL;
    this->Button_PurchaseBattlePass = NULL;
    this->Button_PurchaseSubscription = NULL;
    this->Button_MobileConfirmSelection = NULL;
    this->Button_PurchaseBattlePassConfirmation = NULL;
    this->Button_PurchaseBattlePassBundleConfirmation = NULL;
    this->Widget_SubscriptionRewardDetails = NULL;
    this->Overlay_SafeZone = NULL;
    this->Image_White = NULL;
    this->VideoStream_Source = NULL;
    this->ItemPairsInspectionScreen = NULL;
    this->ProgressiveItemScreen = NULL;
    this->InspectScreenViewProgressButton = NULL;
    this->InspectScreenSubscribeButton = NULL;
}

void UAthenaPassPurchaseScreen::UpdateSafeZoneOverlayVisibility() {
}






