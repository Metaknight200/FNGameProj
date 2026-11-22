#include "AsyncAction_PerformTargeting.h"

UAsyncAction_PerformTargeting::UAsyncAction_PerformTargeting() {
    this->TargetingPreset = NULL;
    this->SourceActor = NULL;
    this->bUseAsyncTargeting = false;
}

UAsyncAction_PerformTargeting* UAsyncAction_PerformTargeting::PerformTargetingRequest(AActor* NewSourceActor, UTargetingPreset* NewTargetingPreset, bool NewBUseAsyncTargeting) {
    return NULL;
}

UAsyncAction_PerformTargeting* UAsyncAction_PerformTargeting::PerformFilteringRequest(AActor* NewSourceActor, UTargetingPreset* NewTargetingPreset, bool NewBUseAsyncTargeting, const TArray<AActor*> InTargets) {
    return NULL;
}


