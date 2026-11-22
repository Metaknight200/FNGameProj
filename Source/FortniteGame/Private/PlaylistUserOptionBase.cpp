#include "PlaylistUserOptionBase.h"

UPlaylistUserOptionBase::UPlaylistUserOptionBase() {
    this->OptionMaterial = NULL;
    this->bCanHaveNoOverride = false;
    this->MenuListType = UFortMatchmakingKnobsDataSource::None;
    this->OverridenBy = NULL;
    this->WeightOffset = 0;
    this->EditWidget = NULL;
}

FString UPlaylistUserOptionBase::GetOptionValueNameFromValue(const FString& OptionValue, bool bAllowNoOverride, const UPlaylistUserOptionsFilter* Filter) const {
    return TEXT("");
}

FString UPlaylistUserOptionBase::GetOptionKey(bool bWithScoping, const UPlaylistUserOptionsFilter* Filter) const {
    return TEXT("");
}


