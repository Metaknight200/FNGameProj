#include "FortNavSystem.h"

UFortNavSystem::UFortNavSystem() {
    this->DefaultAgentName = TEXT("Husk");
    this->SupportedAgents.AddDefaulted(5);
    this->NamedNavmeshes.AddDefaulted(2);
    this->bAllowAutoRebuild = true;
    this->bRebuildOnInitialUnlock = true;
    this->bUsesStreamedInNavLevel = false;
    this->bUseStaticMeshLinks = false;
    this->bUseStaticWorldLinksDown = true;
    this->bUseStaticWorldLinksUp = true;
    this->bUseJumpLinkActors = true;
    this->bGenerateWallClimbLinks = true;
    this->DirtyAreasUpdateFreqInactive = 0.20f;
    this->NavGraphData = NULL;
}

void UFortNavSystem::OnNavDataRegistered(ANavigationData* NavData) {
}

bool UFortNavSystem::IsNavmeshInRadiusInitialized(UObject* WorldContext, const FVector& TestLocation, float TestRadius) {
    return false;
}


