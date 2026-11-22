#include "FortVariantTokenType.h"
#include "EFortItemType.h"

UFortVariantTokenType::UFortVariantTokenType() {
    this->ItemType = EFortItemType::CosmeticVariantToken;
    this->bAllowMultipleStacks = false;
    this->ProfileType = EItemProfileType::Athena;
    this->cosmetic_item = NULL;
    this->bAutoEquipVariant = true;
    this->bMarkItemUnseen = true;
    this->bCreateGiftbox = false;
}

FGameplayTag UFortVariantTokenType::GetVariantNameTag() const {
    return FGameplayTag{};
}

FGameplayTag UFortVariantTokenType::GetVariantChannelTag() const {
    return FGameplayTag{};
}

UFortItemDefinition* UFortVariantTokenType::GetCosmeticItem() const {
    return NULL;
}


