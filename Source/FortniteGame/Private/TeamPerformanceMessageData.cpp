#include "TeamPerformanceMessageData.h"

FTeamPerformanceMessageData::FTeamPerformanceMessageData() {
    this->TrackingStat = ETeamPerformanceMessageTrackingStat::TeamScore;
    this->ReplicationType = ETeamPerformanceMessageReplicationType::VariableReplication;
    this->NumberOfTeamsToTriggerFor = 0;
    this->bEnabledInternal = false;
    this->bCanStillBeTriggered = false;
    this->MessageIndex = 0;
}

