#include "FortActivitySearchView.h"

UFortActivitySearchView::UFortActivitySearchView() {
    this->EditableText_IslandLink = NULL;
    this->ActivityProvider = NULL;
}



void UFortActivitySearchView::HandleTextCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitInfo) {
}

void UFortActivitySearchView::HandleTextChanged(const FText& Text) {
}


