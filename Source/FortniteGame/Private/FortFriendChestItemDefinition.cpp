#include "FortFriendChestItemDefinition.h"
#include "EFortItemType.h"

UFortFriendChestItemDefinition::UFortFriendChestItemDefinition() {
    this->ItemType = EFortItemType::FriendChest;
    this->bAllowMultipleStacks = false;
    this->GrantToProfileType = TEXT("athena");
    this->InstancedDetail = NULL;
    this->TimePeriod = EFriendChestTimePeriod::Daily;
    this->GrantsPerPeriod = 0;
    this->GrantsPerSeason = 0;
    this->CatchupBankSize = 0;
    this->bAllowSeasonCatchup = false;
}


