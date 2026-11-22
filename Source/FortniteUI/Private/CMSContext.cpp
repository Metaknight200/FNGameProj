#include "CMSContext.h"

UCMSContext::UCMSContext() {
    this->CMSSurveyDataSource = NULL;
    this->PlayerSurveyInterpreter = NULL;
}

bool UCMSContext::ShouldAutoOpenNews() const {
    return false;
}

void UCMSContext::MarkPlaylistInformationAsViewed() {
}

void UCMSContext::MarkNewsAsShown() {
}

bool UCMSContext::IsNewPlaylistInformationAvailable() const {
    return false;
}

bool UCMSContext::GetSurvivalCMSText(FText& Title, FText& Body) const {
    return false;
}

FSubgameScreenSource UCMSContext::GetLatestSubgameInfo() {
    return FSubgameScreenSource{};
}

FKoreanCafeSource UCMSContext::GetLatestPCBInfo() {
    return FKoreanCafeSource{};
}

FDynamicBackgroundsSource UCMSContext::GetLatestDynamicBackgrounds() const {
    return FDynamicBackgroundsSource{};
}

FCreativeAdSource UCMSContext::GetLatestCreativeAds() {
    return FCreativeAdSource{};
}


