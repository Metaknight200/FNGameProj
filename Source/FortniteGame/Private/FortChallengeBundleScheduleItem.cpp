#include "FortChallengeBundleScheduleItem.h"

UFortChallengeBundleScheduleItem::UFortChallengeBundleScheduleItem() {
}

UFortChallengeBundleScheduleDefinition* UFortChallengeBundleScheduleItem::GetScheduleDefinitionBP() const {
    return NULL;
}

float UFortChallengeBundleScheduleItem::GetPercentageComplete() const {
    return 0.0f;
}

void UFortChallengeBundleScheduleItem::GetAchievedCount(int32& OutTotalAchievedCount, int32& OutTotalRequiredCount) const {
}


