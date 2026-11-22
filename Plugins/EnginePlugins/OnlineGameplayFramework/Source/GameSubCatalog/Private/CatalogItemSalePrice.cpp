#include "CatalogItemSalePrice.h"

FCatalogItemSalePrice::FCatalogItemSalePrice() {
    // Initialize reflected value fields omitted by the dump.
    this->EndTime = FDateTime(0);
    this->StartTime = FDateTime(0);
    this->SalePrice = 0;
    this->SaleType = ECatalogSaleType::NotOnSale;
}

