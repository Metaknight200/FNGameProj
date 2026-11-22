#include "FortConsumableItemDefinition.h"
#include "EFortItemType.h"

UFortConsumableItemDefinition::UFortConsumableItemDefinition() {
    this->ItemType = EFortItemType::Food;
    this->bSupportsQuickbarFocus = false;
    this->bItemCanBeStolen = true;
    this->UseTime = 3.00f;
    this->bRequiresMissingHealth = true;
}

UAnimMontage* UFortConsumableItemDefinition::GetUseAnimation() const {
    return NULL;
}

float UFortConsumableItemDefinition::GetHealthRestored(int32 ItemLevel) const {
    return 0.0f;
}

float UFortConsumableItemDefinition::GetAnimPlayRate() const {
    return 0.0f;
}

void UFortConsumableItemDefinition::ConsumeItem(const FGameplayEventData& EventData) {
}


