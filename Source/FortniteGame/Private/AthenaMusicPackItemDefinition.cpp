#include "AthenaMusicPackItemDefinition.h"
#include "EFortItemType.h"

UAthenaMusicPackItemDefinition::UAthenaMusicPackItemDefinition() {
    this->ItemType = EFortItemType::AthenaMusicPack;
    this->bIsDefaultMusicPack = false;
    this->MusicPreviewStartTime = 0.00f;
}

TSoftObjectPtr<UTexture2D> UAthenaMusicPackItemDefinition::GetCoverArt() const {
    return NULL;
}


