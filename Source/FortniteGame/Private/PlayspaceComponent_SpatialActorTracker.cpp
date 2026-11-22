#include "PlayspaceComponent_SpatialActorTracker.h"

UPlayspaceComponent_SpatialActorTracker::UPlayspaceComponent_SpatialActorTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bCheckOverlapsOnStartup = true;
    this->bSceneQueryOnStartup = false;
    this->SceneQueryShape = ESceneQueryShape::Sphere;
    this->bEnableReScanTimer = false;
    this->ReScanFrequencyInSeconds = 1.00f;
}

void UPlayspaceComponent_SpatialActorTracker::HandleTrackedActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

TSet<TSoftObjectPtr<AActor>> UPlayspaceComponent_SpatialActorTracker::GetTrackedActors() const {
    return TSet<TSoftObjectPtr<AActor>>();
}

int32 UPlayspaceComponent_SpatialActorTracker::GetNumTrackedActors() const {
    return 0;
}

void UPlayspaceComponent_SpatialActorTracker::ActorExitVolume(AActor* OverlapingVolume, AActor* LeavingActor) {
}

void UPlayspaceComponent_SpatialActorTracker::ActorEnteredVolume(AActor* OverlapingVolume, AActor* EnteringActor) {
}


