#include "FortGameplayDataTrackerComponent.h"
#include "Net/UnrealNetwork.h"

UFortGameplayDataTrackerComponent::UFortGameplayDataTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldReplicateEvents = true;
    this->bUseFirstPlayerControllerViewTargetAsAvatarActor = false;
    this->CachedGameState = NULL;
    this->VislogFrequencySeconds = 0.10f;
    this->LastVislogTime = -340282346638528859811704183484516925440.00f;
}

void UFortGameplayDataTrackerComponent::TriggerEvent(const FGameplayTag& EventTag, float Value) {
}

bool UFortGameplayDataTrackerComponent::RegisterForEventValueRange(const FGameplayTag& Event, FFortGameplayDataTrackedRange Range, FFortTrackedGameplayDataRangeChanged Delegate) {
    return false;
}

bool UFortGameplayDataTrackerComponent::RegisterForAccumulationRangeEvents(const FGameplayTag& AccumulationTag, const FGameplayTag& RangeTag, FFortTrackedGameplayDataRangeChanged Delegate) {
    return false;
}

void UFortGameplayDataTrackerComponent::OnRep_EventValues() {
}

void UFortGameplayDataTrackerComponent::HandlePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

float UFortGameplayDataTrackerComponent::GetEventValue(const FGameplayTag& EventTag) const {
    return 0.0f;
}

float UFortGameplayDataTrackerComponent::GetAccumulationValue(const FGameplayTag& AccumulationTag) const {
    return 0.0f;
}

bool UFortGameplayDataTrackerComponent::AddDataAccumulation(FFortGameplayDataTrackerAccumulation Accumulation) {
    return false;
}

void UFortGameplayDataTrackerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortGameplayDataTrackerComponent, ReplicatedEventValues);
}


