#include "FortGiftBoxItemDefinition.h"
#include "EFortItemType.h"
#include "Templates/SubclassOf.h"

UFortGiftBoxItemDefinition::UFortGiftBoxItemDefinition() {
    this->ItemType = EFortItemType::GiftBox;
    this->bAllowMultipleStacks = false;
    this->GrantToProfileType = TEXT("common_core");
    this->RestrictToSubgame = ESubGame::Count;
    this->GiftWrapType = EFortGiftWrapType::System;
    this->SortPriority = 0;
    this->bReuseExistingBoxIfPossible = false;
    this->bOverrideBackgroundMessage = false;
}

bool UFortGiftBoxItemDefinition::TryLoadPreMessageWidgetClass(TSubclassOf<UUserWidget>& OutWidgetClass) {
    return false;
}

bool UFortGiftBoxItemDefinition::TryLoadHeaderSubWidgetClass(TSubclassOf<UUserWidget>& OutWidgetClass) {
    return false;
}

bool UFortGiftBoxItemDefinition::HasPreMessageWidget() const {
    return false;
}

bool UFortGiftBoxItemDefinition::HasHeaderSubWidget() const {
    return false;
}


