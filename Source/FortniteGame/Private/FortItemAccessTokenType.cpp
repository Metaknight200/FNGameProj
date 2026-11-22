#include "FortItemAccessTokenType.h"
#include "EFortItemType.h"

UFortItemAccessTokenType::UFortItemAccessTokenType() {
    this->ItemType = EFortItemType::ItemAccessToken;
    this->bAllowMultipleStacks = false;
    this->ProfileType = EItemProfileType::Athena;
    this->access_item = NULL;
}

FText UFortItemAccessTokenType::GetUnlockDescription() const {
    return FText::GetEmpty();
}

UFortItemDefinition* UFortItemAccessTokenType::GetAccessItem() const {
    return NULL;
}


