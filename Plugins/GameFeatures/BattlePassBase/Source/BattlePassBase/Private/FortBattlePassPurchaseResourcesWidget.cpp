#include "FortBattlePassPurchaseResourcesWidget.h"

UFortBattlePassPurchaseResourcesWidget::UFortBattlePassPurchaseResourcesWidget() {
    this->Button_Addition = NULL;
    this->Button_BatchAddition = NULL;
    this->Button_Subtraction = NULL;
    this->Button_BatchSubtraction = NULL;
    this->Button_Purchase = NULL;
    this->Button_GetVBucks = NULL;
    this->Button_Back = NULL;
    this->CheckBox_Bundle = NULL;
    this->Button_CloseMobile = NULL;
    this->CurrentLevel = 0;
    this->bIsOfferActive = false;
    this->CurrentVBucks = 0;
    this->CurrentBattleStars = 0;
    this->BatchNum = 0;
    this->CurrentPage = 0;
    this->bOfferUnavailable = false;
}




void UFortBattlePassPurchaseResourcesWidget::HandlePurchaseMultiComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const TArray<FString>& OfferIdList) {
}

void UFortBattlePassPurchaseResourcesWidget::HandlePurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId) {
}


