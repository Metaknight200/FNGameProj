#include "AthenaItemShopSection.h"

UAthenaItemShopSection::UAthenaItemShopSection() {
    this->OriginalScale = 0.76f;
    this->LargeScale = 0.90f;
    this->EntryBox_OfferEntries = NULL;
    this->ScrollBox_Offers = NULL;
    this->Text_Title = NULL;
    this->HBox_Timer = NULL;
    this->Text_TimeRemaining = NULL;
    this->CircleArrowButton_Next = NULL;
    this->CircleArrowButton_Previous = NULL;
    this->ScaleBox_Offers = NULL;
}


void UAthenaItemShopSection::HandleUserScrolled(float InCurrentScrollOffset) {
}


