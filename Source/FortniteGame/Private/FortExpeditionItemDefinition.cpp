#include "FortExpeditionItemDefinition.h"
#include "EFortItemType.h"

UFortExpeditionItemDefinition::UFortExpeditionItemDefinition() {
    this->ItemType = EFortItemType::Expedition;
    this->ExpeditionDuration_Minutes = 0.00f;
    this->ExpeditionExpirationDuration_Minutes = 0.00f;
    this->BaseTargetPowerRating = 0;
    this->TierFactor = 0;
    this->MaxTargetPowerClamp = 0;
}

FGameplayTagContainer UFortExpeditionItemDefinition::GetRequiredTags() const {
    return FGameplayTagContainer{};
}

void UFortExpeditionItemDefinition::GetExpeditionCosts(TArray<FItemAndCount>& OutExpeditionCosts) const {
}

void UFortExpeditionItemDefinition::GetAllRewards(TArray<UFortCardPackItemDefinition*>& OutRewards) {
}


