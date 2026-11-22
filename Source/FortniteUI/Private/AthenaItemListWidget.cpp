#include "AthenaItemListWidget.h"

UAthenaItemListWidget::UAthenaItemListWidget() {
    this->ItemSortType = EInventoryContentSortType::ByName;
    this->ItemListView = NULL;
}


void UAthenaItemListWidget::HandleInventoryUpdated() {
}


