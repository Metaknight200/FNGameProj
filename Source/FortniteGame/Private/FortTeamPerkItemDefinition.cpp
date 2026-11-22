#include "FortTeamPerkItemDefinition.h"
#include "EFortItemType.h"

UFortTeamPerkItemDefinition::UFortTeamPerkItemDefinition() {
    this->ItemType = EFortItemType::TeamPerk;
    this->bCanBeFavorite = false;
    this->bCanBeMarkedSeen = false;
    this->bProgressiveBonus = false;
}

bool UFortTeamPerkItemDefinition::HasProgressiveBonus() const {
    return bProgressiveBonus;
}

UFortAbilityKit* UFortTeamPerkItemDefinition::GetAbilityKitBP() const {
    return NULL;
}


