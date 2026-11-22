#include "MoleQuickChatPlayerEntry.h"

UMoleQuickChatPlayerEntry::UMoleQuickChatPlayerEntry() {
    this->PlayerPortraitColorAMaterialParameterName = TEXT("Color1");
    this->PlayerPortraitColorBMaterialParameterName = TEXT("Color2");
    this->bIsOnLowerRow = false;
    this->PlayerState = NULL;
    this->bIsLocalPlayer = false;
    this->bIsGhost = false;
    this->bIsFilteredOut = false;
    this->LazyImage_PlayerPortrait = NULL;
    this->Size_Ghost = NULL;
    this->Text_PlayerNumber = NULL;
}



