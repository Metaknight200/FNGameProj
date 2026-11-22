#include "FortRealMoneyOffer.h"

UFortRealMoneyOffer::UFortRealMoneyOffer() {
    this->PurchaseUnavailableModalClass = NULL;
    this->ItemPreviewDetailsClass = NULL;
    this->ItemShopItemPreviewDetailsClass = NULL;
    this->RealMoneyDetailsClass = NULL;
    this->ItemShopRealMoneyDetailsClass = NULL;
}


bool UFortRealMoneyOffer::GetSalePriceFromLastAppStore(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const {
    return false;
}


