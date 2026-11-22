#include "ReplicatedVkResolvedModule.h"

FReplicatedVkResolvedModule::FReplicatedVkResolvedModule() {
    this->bShouldBeInstalled = false;
    this->TargetInstalledState = EGameFeatureTargetState::Installed;
}

