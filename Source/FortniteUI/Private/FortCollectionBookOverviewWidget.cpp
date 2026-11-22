#include "FortCollectionBookOverviewWidget.h"

UFortCollectionBookOverviewWidget::UFortCollectionBookOverviewWidget() {
    this->LastSelectedPage = NULL;
    this->LastSelectedCategory = NULL;
    this->PageTreeViewWidget = NULL;
}

void UFortCollectionBookOverviewWidget::OnDeactivated_Implementation() {
}

void UFortCollectionBookOverviewWidget::OnActivated_Implementation() {
}

void UFortCollectionBookOverviewWidget::HandlePagesChanged(UFortCollectionBookManager* CBManager) {
}


