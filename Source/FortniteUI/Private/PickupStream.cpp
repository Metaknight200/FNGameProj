#include "PickupStream.h"

UPickupStream::UPickupStream() {
    this->MaxDisplayedItems = 0;
    this->PickupEntryWidgetClass = NULL;
    this->ExpirationTime = 5.00f;
    this->VerticalBox_PickupMessages = NULL;
}


void UPickupStream::HandleItemPickedUp(UFortWorldItem* WorldItem, int32 Count) {
}


