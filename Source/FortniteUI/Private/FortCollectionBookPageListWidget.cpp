#include "FortCollectionBookPageListWidget.h"

UFortCollectionBookPageListWidget::UFortCollectionBookPageListWidget() {
    this->bInteractableWhenSelected = true;
    this->PageNameWidget = NULL;
    this->AvailableSlotsWidget = NULL;
    this->PageCompletionWidget = NULL;
    this->bIsExpanded = false;
}



void UFortCollectionBookPageListWidget::OnSlottedItemOperationComplete(const UFortAccountItem* SlottedItem, FName SlotId) {
}




