#include "FortClientEventsState.h"

FFortClientEventsState::FFortClientEventsState() {
    // Initialize reflected value fields omitted by the dump.
    this->DailyStoreEnd = FDateTime(0);
    this->SeasonBegin = FDateTime(0);
    this->SeasonDisplayedEnd = FDateTime(0);
    this->SeasonEnd = FDateTime(0);
    this->StwDailyStoreEnd = FDateTime(0);
    this->StwEventStoreEnd = FDateTime(0);
    this->StwWeeklyStoreEnd = FDateTime(0);
    this->WeeklyStoreEnd = FDateTime(0);
    this->SeasonNumber = 0;
    this->MatchXpBonusPoints = 0.00f;
}

