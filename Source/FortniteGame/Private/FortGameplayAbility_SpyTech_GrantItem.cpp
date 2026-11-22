#include "FortGameplayAbility_SpyTech_GrantItem.h"

UFortGameplayAbility_SpyTech_GrantItem::UFortGameplayAbility_SpyTech_GrantItem() {
    this->bSkipUpgradeCheck = false;
    this->bRechargeStackOnGrant = false;
    this->FortPlayerController = NULL;
    this->FortPlayerPawn = NULL;
    this->TextItemSource = TEXT("SpyTech_GrantItem");
}

void UFortGameplayAbility_SpyTech_GrantItem::UpgradeTagApplied(const FGameplayTag InTag, int32 NewCount) {
}

void UFortGameplayAbility_SpyTech_GrantItem::LevelUpgradeTagApplied(const FGameplayTag InTag, int32 NewCount) {
}


