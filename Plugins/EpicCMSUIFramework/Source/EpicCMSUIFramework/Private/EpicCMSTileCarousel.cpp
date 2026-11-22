#include "EpicCMSTileCarousel.h"

UEpicCMSTileCarousel::UEpicCMSTileCarousel() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->Carousel = NULL;
    this->NextPageButton = NULL;
    this->PreviousPageButton = NULL;
    this->bShouldShowNavigationOnlyOnHover = false;
    this->bInputActionsForPaging = true;
    this->bIsShowingNavigation = true;
}

void UEpicCMSTileCarousel::SetCurrentPageByIndex(const int32 PageIndex) {
}

void UEpicCMSTileCarousel::PreviousPage() {
}

void UEpicCMSTileCarousel::NextPage() {
}


void UEpicCMSTileCarousel::HandleTilePageAdded_Implementation(UWidget* TileWidget) {
}

int32 UEpicCMSTileCarousel::GetCurrentPageIndex() const {
    return 0;
}

void UEpicCMSTileCarousel::BeginAutoScrolling() {
}

void UEpicCMSTileCarousel::AddTilePage(UWidget* TilePageWidget) {
}


