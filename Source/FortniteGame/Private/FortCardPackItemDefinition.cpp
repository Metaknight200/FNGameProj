#include "FortCardPackItemDefinition.h"
#include "EFortItemType.h"

UFortCardPackItemDefinition::UFortCardPackItemDefinition() {
    this->ItemType = EFortItemType::CardPack;
    this->bIsLlama = false;
    this->bIsChoicePack = false;
    this->bAutoOpenAsReward = true;
    this->LootTier = 0;
    this->DisplayRarityLevel = 0;
}

bool UFortCardPackItemDefinition::IsLlama() const {
    return false;
}

bool UFortCardPackItemDefinition::IsChoicePack() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UFortCardPackItemDefinition::GetXRayImage() const {
    return NULL;
}

UFortPackPersonality* UFortCardPackItemDefinition::GetPackPersonality() const {
    return NULL;
}

UTexture* UFortCardPackItemDefinition::GetPackImage() const {
    return NULL;
}

FLinearColor UFortCardPackItemDefinition::GetPackColor() const {
    return FLinearColor{};
}

int32 UFortCardPackItemDefinition::GetDisplayRarityLevel() const {
    return DisplayRarityLevel;
}


