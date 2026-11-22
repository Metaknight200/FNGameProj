#include "FortBannerTokenType.h"
#include "EFortItemType.h"

UFortBannerTokenType::UFortBannerTokenType() {
    this->ItemType = EFortItemType::BannerToken;
    this->bAllowMultipleStacks = false;
    this->ProfileType = EItemProfileType::Athena;
}


