#include "FortMusicAsset.h"

UFortMusicAsset::UFortMusicAsset() {
    this->Priority = 0.00f;
    this->StopBehavior = EFortMusicSectionStopBehavior::Crossfade;
    this->bIsStinger = false;
}

FFortMusicSection UFortMusicAsset::GetMusicSection(TEnumAsByte<EFortMusicSectionType::Type> Section) {
    return FFortMusicSection{};
}


