#include "FortPostGameMenuListView.h"

UFortPostGameMenuListView::UFortPostGameMenuListView() : Super(FObjectInitializer::Get()) {
    this->EntryClass = NULL;
    this->ItemShopEntryClass = NULL;
    this->EntrySpacing = 8.00f;
}

UFortPostGameMenuEntry* UFortPostGameMenuListView::GetFirstEntry() const {
    return NULL;
}


