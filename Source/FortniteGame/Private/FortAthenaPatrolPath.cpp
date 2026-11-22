#include "FortAthenaPatrolPath.h"
#include "Components/SceneComponent.h"

AFortAthenaPatrolPath::AFortAthenaPatrolPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->Mode = EPatrollingMode::BackAndForth;
    this->bUseRandomStartupPatrolPoint = false;
    this->bUseRandomStartupDirection = false;
    this->RadialLeashLocationActorOverride = NULL;
    this->RadialLeashInnerRadiusOverride = -1.00f;
    this->RadialLeashOuterRadiusOverride = -1.00f;
    this->bLeashEnabled = false;
    this->LeashWidth = 1000.00f;
    this->LeashHeight = 200.00f;
    this->MaxConcurrentUsage = 1;
    this->CurrentConcurrentUsage = 0;
    this->DebugLinkWidthSelected = 8.00f;
    this->DebugLinkWidthNotSelected = 6.00f;
}

void AFortAthenaPatrolPath::OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void AFortAthenaPatrolPath::GetPatrolPoints(TArray<AFortAthenaPatrolPoint*>& OutPatrolPoints) const {
}


