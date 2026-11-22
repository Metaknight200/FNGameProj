#include "WarmupMovieComponent.h"

UWarmupMovieComponent::UWarmupMovieComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UWarmupMovieComponent::ServerFinishedWatchingMovie_Implementation() {
}


