#include "FortGameData.h"
#include "FortDeathCauseData.h"

UFortGameData::UFortGameData() {
    this->PickupSplineOffsetRange[0] = 150.00f;
    this->PickupSplineOffsetRange[1] = 150.00f;
    this->PickupSplineRandomMax = 1.25f;
    this->PickupSplineDropToGroundLength = 0.80f;
    this->PickupMaxCollectionTime = 4.00f;
    this->PickupMaxDelayPerItem = 0.30f;
    this->DefaultLootInstancingRange = 6144.00f;
    this->QuestIndicatorData = NULL;
    this->SeasonItemIndicatorData = NULL;
    this->AutoPickupViewAngle = 60.00f;
    this->QueuedAnnouncementPauseTimes[0] = 0.00f;
    this->QueuedAnnouncementPauseTimes[1] = 0.00f;
    this->QueuedAnnouncementPauseTimes[2] = 0.00f;
    this->BuildingRetestSupportedByWorldDelay = 0.20f;
    this->BuildingStructuralCollapseDelay = 0.25f;
    this->BuildingStructuralCollapseDelayVariance = 0.00f;
    this->BuildingStructuralCollapseCellDistAdditiveDelay = 0.10f;
    this->BuildingStructuralCollapseCellDistAdditiveDelayVariance = 0.00f;
    this->EditModeCancelDistance = 750.00f;
    this->CachedSurfaceRatioBySurfaceCategoryData = NULL;
    this->CachedSurfaceRatioByAffiliationData = NULL;
    this->CompositeDeathCauseData = CreateDefaultSubobject<UFortDeathCauseData>(TEXT("CompositeDeathCauseData"));
    this->ConversationSoundRange = 1500.00f;
}

TArray<FName> UFortGameData::GetHighlightStencilParamNames() {
    return TArray<FName>();
}

TArray<FName> UFortGameData::GetHighlightParamProfileNames() {
    return TArray<FName>();
}


