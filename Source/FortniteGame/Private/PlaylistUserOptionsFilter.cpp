#include "PlaylistUserOptionsFilter.h"

UPlaylistUserOptionsFilter::UPlaylistUserOptionsFilter() {
    this->KnobThatWeAreBeingApplied = NULL;
    this->bInvertIgnoredValues = false;
    this->MenuListType = UFortMatchmakingKnobsDataSource::None;
}

bool UPlaylistUserOptionsFilter::IsValueFiltered_Implementation(const FString& Value) const {
    return false;
}


