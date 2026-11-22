#include "AthenaInventoryPanel.h"

UAthenaInventoryPanel::UAthenaInventoryPanel() {
    this->QuantitySelectorClass = NULL;
    this->StackSizeDataTable = NULL;
    this->CurrencyView = NULL;
    this->IngredientView = NULL;
    this->ResourceView = NULL;
    this->AmmoView = NULL;
    this->QuickbarEditor = NULL;
}

void UAthenaInventoryPanel::HandleInventoryItemSelected(UFortItem* SelectedInventoryItem) {
}


