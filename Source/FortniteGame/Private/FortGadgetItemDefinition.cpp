#include "FortGadgetItemDefinition.h"
#include "EFortInventoryFilter.h"
#include "EFortItemType.h"
#include "Templates/SubclassOf.h"

UFortGadgetItemDefinition::UFortGadgetItemDefinition() {
    this->ItemType = EFortItemType::Gadget;
    this->FilterOverride = EFortInventoryFilter::Gadget;
    this->bSupportsQuickbarFocus = false;
    this->bCanBeDropped = false;
    this->GadgetPriority = 0;
    this->bDestroyGadgetWhenTrackedAttributesIsZero = true;
    this->bHasChargeUp = false;
    this->bDropAllOnEquip = false;
    this->bCanChangePreviewImageDuringGame = false;
    this->bValidForLastEquipped = false;
}

bool UFortGadgetItemDefinition::HasTrackedAttributes() const {
    return false;
}

bool UFortGadgetItemDefinition::HasChargeUp() const {
    return false;
}

UFortWeaponItemDefinition* UFortGadgetItemDefinition::GetWeaponItemDefinition() const {
    return NULL;
}

FGameplayAttribute UFortGadgetItemDefinition::GetLevelAttribute() const {
    return FGameplayAttribute{};
}

TSubclassOf<UFortGameplayAbility> UFortGadgetItemDefinition::GetGameplayAbility() const {
    return NULL;
}


