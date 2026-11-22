#include "TrackDynamicBackground.h"

FTrackDynamicBackground::FTrackDynamicBackground() {
    // Initialize reflected value fields omitted by the dump.
    this->PrimaryColor = FLinearColor::Transparent;
    this->SecondaryColor = FLinearColor::Transparent;
    this->TertiaryColor = FLinearColor::Transparent;
    this->bIsSpecial = false;
    this->bIsFoil = false;
    this->MinimalDiscoveryLevel = 0;
}

