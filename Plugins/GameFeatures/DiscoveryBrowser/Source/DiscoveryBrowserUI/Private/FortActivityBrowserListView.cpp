#include "FortActivityBrowserListView.h"
#include "Components/SlateWrapperTypes.h"

UFortActivityBrowserListView::UFortActivityBrowserListView() : Super(FObjectInitializer::Get()) {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->bEnableScrollAnimation = true;
    this->bEnableFixedLineOffset = true;
}


