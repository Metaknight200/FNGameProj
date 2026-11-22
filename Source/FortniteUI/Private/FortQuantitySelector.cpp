#include "FortQuantitySelector.h"

UFortQuantitySelector::UFortQuantitySelector() {
    this->Button_Confirm = NULL;
    this->Button_Cancel = NULL;
    this->Item = NULL;
    this->CurrentQuantity = 0;
}


void UFortQuantitySelector::InitializeQuantitySelector(UFortItem* InItem, const FText TitleText, const FText ConfirmButtonText, const FText AdditionalInfoText, const int32 InitialQuantity, const int32 MaximumQuantity) {
}

UFortItem* UFortQuantitySelector::GetItem() const {
    return Item;
}


