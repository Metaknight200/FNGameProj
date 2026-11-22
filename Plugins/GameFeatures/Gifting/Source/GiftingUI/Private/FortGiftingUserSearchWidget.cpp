#include "FortGiftingUserSearchWidget.h"

UFortGiftingUserSearchWidget::UFortGiftingUserSearchWidget() {
    this->EditableText_SearchFriends = NULL;
    this->Button_ClearQuery = NULL;
    this->Button_SubmitQuery = NULL;
}


void UFortGiftingUserSearchWidget::HandleSearchFriendsTextEntered(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UFortGiftingUserSearchWidget::HandleSearchFriendsTextChanged(const FText& Text) {
}


