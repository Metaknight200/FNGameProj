#include "CatalogItemPrice.h"

FCatalogItemPrice::FCatalogItemPrice() {
    // Initialize reflected value fields omitted by the dump.
    this->SaleExpiration = FDateTime(0);
    this->CurrencyType = EStoreCurrencyType::RealMoney;
    this->RegularPrice = 0;
    this->FinalPrice = 0;
    this->SaleType = ECatalogSaleType::NotOnSale;
    this->AppStoreId = EAppStore::DebugStore;
}

