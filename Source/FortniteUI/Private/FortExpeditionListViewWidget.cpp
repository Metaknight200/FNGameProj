#include "FortExpeditionListViewWidget.h"

UFortExpeditionListViewWidget::UFortExpeditionListViewWidget() {
    this->ExpeditionListView = NULL;
    this->SortType = EFortExpeditionListSort::ByRating;
}

void UFortExpeditionListViewWidget::SetExpeditionListSortType(EFortExpeditionListSort InSortType) {
}

FText UFortExpeditionListViewWidget::GetExpeditionListSortName() const {
    return FText::GetEmpty();
}


