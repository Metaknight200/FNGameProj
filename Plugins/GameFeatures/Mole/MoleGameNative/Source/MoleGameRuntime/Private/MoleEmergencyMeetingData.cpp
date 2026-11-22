#include "MoleEmergencyMeetingData.h"

FMoleEmergencyMeetingData::FMoleEmergencyMeetingData() {
    this->MeetingCause = EEmergencyMeetingCause::None;
    this->MeetingCaller = NULL;
    this->BodyFound = NULL;
}

