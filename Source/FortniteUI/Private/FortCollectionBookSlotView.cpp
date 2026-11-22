#include "FortCollectionBookSlotView.h"

UFortCollectionBookSlotView::UFortCollectionBookSlotView() {
    this->CollectionBookButtonBox = NULL;
    this->CollectionBookSlotButtonGroup = NULL;
    this->AssociatedSection = NULL;
    this->PreviousSelectedButtonIdx = -1;
    this->CurrentSelectedButtonIdx = -1;
}

void UFortCollectionBookSlotView::OnSlotButtonHovered(UCommonButtonLegacy* HoveredButton, int32 ButtonIdx) {
}

void UFortCollectionBookSlotView::OnSlotButtonClicked(UCommonButtonLegacy* ClickedButton, int32 ButtonIdx) {
}

void UFortCollectionBookSlotView::OnSelectedSlotButtonChanged(UCommonButtonLegacy* SelectedButton, int32 ButtonIdx) {
}


