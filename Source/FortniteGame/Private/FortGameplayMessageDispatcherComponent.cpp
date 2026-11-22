#include "FortGameplayMessageDispatcherComponent.h"

UFortGameplayMessageDispatcherComponent::UFortGameplayMessageDispatcherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumBoundReceivers = 0;
    this->NumBoundTriggers = 0;
}

void UFortGameplayMessageDispatcherComponent::OnVolumeStateChanged(FEventMessageTag Channel, const FSpatialGamePlayActorLoadingStateUpdatedContext& StateContext) {
}


