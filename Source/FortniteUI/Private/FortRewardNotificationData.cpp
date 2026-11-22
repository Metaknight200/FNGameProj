#include "FortRewardNotificationData.h"

UFortRewardNotificationData::UFortRewardNotificationData() {
    this->RewardType = EFrontEndRewardType::Mission;
}

bool UFortRewardNotificationData::GetIconBrush(FSlateBrush& IconBrush, TEnumAsByte<EFortBrushSize::Type> BrushSize) {
    return false;
}


