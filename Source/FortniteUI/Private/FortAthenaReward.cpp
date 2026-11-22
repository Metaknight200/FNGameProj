#include "FortAthenaReward.h"

UFortAthenaReward::UFortAthenaReward() {
    this->SecondaryItemDefToRepresent = NULL;
    this->RepresentedItemDefinition = NULL;
    this->ItemCard = NULL;
    this->Widget_ClaimedImage = NULL;
    this->Widget_LockedImage = NULL;
    this->Widget_UnearnedTintOverlay = NULL;
    this->Widget_OwnedBorder = NULL;
}

void UFortAthenaReward::SetViewOnHovered(bool bShouldViewOnHovered) {
}

void UFortAthenaReward::SetupItem(const UFortItemDefinition* ItemDefToRepresent, int32 Quantity, bool bLevelAchieved, bool bClaimed, bool bLocked, bool bOwned) {
}




