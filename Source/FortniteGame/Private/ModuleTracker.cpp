#include "ModuleTracker.h"

FModuleTracker::FModuleTracker() {
    this->bShouldBeInstalled = false;
    this->TargetInstalledState = EGameFeatureTargetState::Installed;
    this->bHasAttemptedActivation = false;
}

