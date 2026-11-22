#include "FortChallengeBundleScheduleDefinition.h"
#include "EFortItemType.h"

UFortChallengeBundleScheduleDefinition::UFortChallengeBundleScheduleDefinition() {
    this->ItemType = EFortItemType::ChallengeBundleSchedule;
    this->bAllowMultipleStacks = false;
    this->GrantToProfileType = TEXT("athena");
    this->CleanUpOnBundleCompletion = false;
    this->bHideInLegacyAllChallengesEscapeMenu = false;
    this->bSeperateEachBundleForDisplay = false;
    this->SortPriority = 0;
    this->bHideCountdownFromMapChallenges = false;
}

int32 UFortChallengeBundleScheduleDefinition::GetSortPriority() const {
    return SortPriority;
}

int32 UFortChallengeBundleScheduleDefinition::GetNumBundles() const {
    return 0;
}

FString UFortChallengeBundleScheduleDefinition::GetEventName() const {
    return TEXT("");
}

FString UFortChallengeBundleScheduleDefinition::GetCalendarEventName() const {
    return TEXT("");
}

TArray<UFortChallengeBundleItemDefinition*> UFortChallengeBundleScheduleDefinition::GetBundleDefinitions() const {
    return TArray<UFortChallengeBundleItemDefinition*>();
}

bool UFortChallengeBundleScheduleDefinition::DoesChallengeBundleScheduleExpire() const {
    return false;
}


