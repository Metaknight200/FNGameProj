#include "FortPageNavigator.h"

UFortPageNavigator::UFortPageNavigator() {
    this->Button_Next = NULL;
    this->Button_Previous = NULL;
    this->SwipePanel_PagesNavigation = NULL;
    this->ScrollBox_Pages = NULL;
    this->VBox_Pages = NULL;
    this->bEnableSnapScrolling = false;
    this->SnapScrollingThreshold = 8.00f;
    this->EntryBox_PagesPips = NULL;
    this->ButtonGroup_PagesPips = NULL;
}

void UFortPageNavigator::SelectPage(const int32 PageIndex, const bool bSkipAnimation) {
}

void UFortPageNavigator::RequestPreviousPage() {
}

void UFortPageNavigator::RequestNextPage() {
}


void UFortPageNavigator::HandleUserScrolled(float ScrollAmount) {
}

void UFortPageNavigator::HandleScrollCompleted(float ScrollAmount) {
}

void UFortPageNavigator::ClearPages() {
}


