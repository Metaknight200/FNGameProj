#include "AthenaBroadcastKillFeedBase.h"

UAthenaBroadcastKillFeedBase::UAthenaBroadcastKillFeedBase() {
    this->KillFeedEntryBox = NULL;
    this->TimeToShowEntry = 6.00f;
}

void UAthenaBroadcastKillFeedBase::OnToggleShowKillFeed(bool bShowKillFeed) {
}

void UAthenaBroadcastKillFeedBase::OnTimelineScrubbed() {
}

void UAthenaBroadcastKillFeedBase::AddKillFeedEntry(const FAthenaBroadcastKillFeedEntryInfo& KillFeedEntryInfo) {
}


