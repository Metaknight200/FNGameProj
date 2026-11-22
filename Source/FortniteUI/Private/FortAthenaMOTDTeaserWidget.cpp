#include "FortAthenaMOTDTeaserWidget.h"

UFortAthenaMOTDTeaserWidget::UFortAthenaMOTDTeaserWidget() {
    this->MOTDWidgetClass = NULL;
    this->MOTDSimpleNewsWidgetClass = NULL;
    this->FortAthenaMOTDTileListView = NULL;
}


void UFortAthenaMOTDTeaserWidget::OpenMOTDScreen(int32 FocusedNewsIndex) {
}


int32 UFortAthenaMOTDTeaserWidget::GetNewsCount() const {
    return 0;
}

FAthenaMOTDBase UFortAthenaMOTDTeaserWidget::GetNewsByIndex(int32 Index) const {
    return FAthenaMOTDBase{};
}


