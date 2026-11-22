#include "FortBadgeItemDefinition.h"
#include "EFortItemType.h"

UFortBadgeItemDefinition::UFortBadgeItemDefinition() {
    this->ItemType = EFortItemType::Badge;
    this->bAllowMultipleStacks = false;
    this->bInventorySizeLimited = false;
    this->bCanBeDropped = false;
    this->UIMissionPointsOffset = 0;
}

int32 UFortBadgeItemDefinition::GetUIMissionPointsOffset() const {
    return 0;
}

int32 UFortBadgeItemDefinition::GetScoreAwarded(const APlayerController* PlayerController) const {
    return 0;
}

int32 UFortBadgeItemDefinition::GetMissionPoints() const {
    return 0;
}

int32 UFortBadgeItemDefinition::GetBadgeScoreThreshold() const {
    return 0;
}

EStatCategory UFortBadgeItemDefinition::GetBadgeScoreCategory() const {
    return EStatCategory::Combat;
}


