#include "FortMusicCombatBank.h"

UFortMusicCombatBank::UFortMusicCombatBank() {
    this->Assets[0] = NULL;
    this->Assets[1] = NULL;
    this->Assets[2] = NULL;
    this->Assets[3] = NULL;
}

UFortMusicAsset* UFortMusicCombatBank::GetAssetFromCombatIntensity(TEnumAsByte<EFortMusicCombatIntensity::Type> Intensity) const {
    return NULL;
}


