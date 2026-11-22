#include "PlaylistFrontEndData.h"

FPlaylistFrontEndData::FPlaylistFrontEndData() {
    // Initialize reflected value fields omitted by the dump.
    this->EndDateUTC = FDateTime(0);
    this->Visibility = (EPlaylistVisibilityState)0;
    this->bDisplayAsDefault = false;
    this->AdvertiseType = EPlaylistAdvertisementType::None;
    this->bDisplayAsLimitedTime = false;
    this->CategoryIndex = 0;
}

