#include "FortCollectionBookSlotConfirmationModal.h"

UFortCollectionBookSlotConfirmationModal::UFortCollectionBookSlotConfirmationModal() {
    this->CurrentlySlottedItem = NULL;
    this->NewItemToSlot = NULL;
    this->Text_SlottingDescription = NULL;
    this->ItemCard_NewlySlottedItem = NULL;
    this->RecycleSlotResultsWidget = NULL;
    this->Button_SlotItem = NULL;
    this->Button_Back = NULL;
}



void UFortCollectionBookSlotConfirmationModal::HandleSlotItemComplete(const UFortAccountItem* SlottedItem, FName SlotId) {
}


