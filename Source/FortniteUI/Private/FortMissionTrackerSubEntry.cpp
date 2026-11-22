#include "FortMissionTrackerSubEntry.h"

UFortMissionTrackerSubEntry::UFortMissionTrackerSubEntry() {
    this->bConfigureAsHUD = true;
    this->bHiddenByHeightConstraint = false;
    this->TrackedObjective = NULL;
}



void UFortMissionTrackerSubEntry::NotifyVisibilityChanged() {
}


