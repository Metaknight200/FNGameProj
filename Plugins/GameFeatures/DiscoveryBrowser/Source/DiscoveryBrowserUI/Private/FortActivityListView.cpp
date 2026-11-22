#include "FortActivityListView.h"

UFortActivityListView::UFortActivityListView() : Super(FObjectInitializer::Get()) {
    this->Orientation = Orient_Horizontal;
    this->EntrySpacing = 0.00f;
}

void UFortActivityListView::HandleMobileScrollCompleted(FVector2D PendingScrollAmounts) {
}


