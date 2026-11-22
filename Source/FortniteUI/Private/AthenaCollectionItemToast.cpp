#include "AthenaCollectionItemToast.h"

UAthenaCollectionItemToast::UAthenaCollectionItemToast() {
    this->OpenCollectionScreenInputHoldTime = 0.50f;
    this->Text_ItemNumber = NULL;
    this->Text_ItemName = NULL;
    this->LazyImage_ItemImage = NULL;
    this->Button_MobileClickCatcher = NULL;
}

void UAthenaCollectionItemToast::ResetToast() {
}

void UAthenaCollectionItemToast::HandleMobileClick() {
}

bool UAthenaCollectionItemToast::BPCallableIsDesignTime() const {
    return false;
}





