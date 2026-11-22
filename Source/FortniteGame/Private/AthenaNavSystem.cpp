#include "AthenaNavSystem.h"

UAthenaNavSystem::UAthenaNavSystem() {
    this->DefaultAgentName = TEXT("Deimos");
    this->SupportedAgents.AddDefaulted(5);
    this->NamedNavmeshes.AddDefaulted(2);
    this->bAllowAutoRebuild = false;
    this->bRebuildOnInitialUnlock = false;
    this->bUsesStreamedInNavLevel = true;
    this->bUseStaticMeshLinks = true;
    this->bGenerateWallClimbLinks = false;
    this->bUseNavDataSetVariants = false;
    this->bUseBuildingGridAsNavigableSpace = false;
    this->bMarkBuildingFoundationDirty = false;
    this->bSupportRuntimeNavmeshDisabling = true;
    this->NavGenerationObserverCheckInterval = 1.00f;
}

void UAthenaNavSystem::UnregisterNavGenerationObserver(USceneComponent* Component) {
}

void UAthenaNavSystem::RegisterNavGenerationObserver(USceneComponent* Component, FOnNavGenerationFinished Event) {
}

bool UAthenaNavSystem::IsInitialNavigationLockActive(UObject* WorldContextObject) {
    return false;
}


