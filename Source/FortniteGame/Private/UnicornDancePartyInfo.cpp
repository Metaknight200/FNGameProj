#include "UnicornDancePartyInfo.h"

FUnicornDancePartyInfo::FUnicornDancePartyInfo() {
    this->StartTimestamp = 0.00f;
    this->EndTimestamp = 0.00f;
    this->PeakMembers = 0;
    this->PeakStartTimestamp = 0.00f;
    this->PeakEndTimestamp = 0.00f;
    this->bEndsBecauseOfUs = false;
    this->bIsMovingEmote = false;
}

