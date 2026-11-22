#include "FortWorldMultiItem.h"

UFortWorldMultiItem::UFortWorldMultiItem() {
    this->TimeOfLastSwitch = 0.00f;
    this->bWantsToSwitch = false;
    this->bTellHasBegun = false;
    this->bDisableEquipAnimationThisFrame = false;
    this->CurrentSelectedItemIndex = -1;
    this->CurrentItemXP = 0.00f;
}

void UFortWorldMultiItem::StopDisablingEquipAnimation() {
}

void UFortWorldMultiItem::OnOwnerPlayerPawnAbilityEndedWithData(const FAbilityEndedData& AbilityEndedData) {
}

void UFortWorldMultiItem::OnOwnerPlayerPawnAbilityActivated(UFortGameplayAbility* GameplayAbility, FGameplayTagContainer AbilityTags) {
}

void UFortWorldMultiItem::IncrementItemXP(float IncrementAmount) {
}


