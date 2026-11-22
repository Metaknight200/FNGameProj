#include "AthenaFeatTimelineListView.h"

UAthenaFeatTimelineListView::UAthenaFeatTimelineListView() : Super(FObjectInitializer::Get()) {
    this->bEnableScrollAnimation = true;
    this->EntrySpacing = 8.00f;
    this->EndSpacing = 16.00f;
    this->DelayBeforeStartCompleted = 0.50f;
    this->DelayBetweenCompletedItems = 1.00f;
}


