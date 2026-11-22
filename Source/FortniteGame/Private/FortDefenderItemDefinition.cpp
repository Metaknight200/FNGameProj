#include "FortDefenderItemDefinition.h"
#include "EFortItemType.h"

UFortDefenderItemDefinition::UFortDefenderItemDefinition() {
    this->ItemType = EFortItemType::Defender;
    this->bInventorySizeLimited = true;
}

FGameplayTag UFortDefenderItemDefinition::GetDefenderSubtypeTag() const {
    return FGameplayTag{};
}

EFortDefenderSubtype UFortDefenderItemDefinition::GetDefenderSubtype() const {
    return EFortDefenderSubtype::AssaultRifle;
}


