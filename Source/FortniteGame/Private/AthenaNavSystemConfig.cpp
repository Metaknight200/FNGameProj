#include "AthenaNavSystemConfig.h"

UAthenaNavSystemConfig::UAthenaNavSystemConfig() {
    this->DefaultAgentName = TEXT("Deimos");
    this->bAutoSpawnMissingNavData = true;
    this->bAllowAutoRebuild = false;
    this->bRebuildOnInitialUnlock = false;
    this->bUsesStreamedInNavLevel = true;
    this->bUseNavDataSetVariants = false;
    this->bUseBuildingGridAsNavigableSpace = true;
    this->bDiscardNavDataFromSublevels = false;
    this->bUseNavigationInvokers = false;
    this->bLazyOctree = false;
    this->bUseNavOctTreeInclusionBounds = false;
    this->bPrioritizeNavigationAroundSpawners = false;
    this->bResetDirtyAreasOnInitialBuildingRelease = true;
    this->bSupportRuntimeNavmeshDisabling = true;
    this->bNavOctreeUnlockedByDefaultWhenNotPreloadingNavData = false;
}


