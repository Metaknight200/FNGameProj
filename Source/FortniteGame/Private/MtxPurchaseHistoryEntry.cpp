#include "MtxPurchaseHistoryEntry.h"

FMtxPurchaseHistoryEntry::FMtxPurchaseHistoryEntry() {
    // Initialize reflected value fields omitted by the dump.
    this->PurchaseDate = FDateTime(0);
    this->RefundDate = FDateTime(0);
    this->FreeRefundEligible = false;
    this->bHasBeenRefunded = false;
    this->TotalMtxPaid = 0;
}

