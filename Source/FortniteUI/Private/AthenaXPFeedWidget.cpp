#include "AthenaXPFeedWidget.h"

UAthenaXPFeedWidget::UAthenaXPFeedWidget() {
    this->VertBox = NULL;
    this->EntryWidgetClass = NULL;
    this->MaxNumOfEntries = 7;
}


void UAthenaXPFeedWidget::OnXpEvent(const FXPUIEvent& XPEvent) {
}

void UAthenaXPFeedWidget::OnForwardedXPEvent(const FXPUIEvent& XPEvent) {
}


