#include "DestinationTrackerPawnComponent.h"
#include "Net/UnrealNetwork.h"

UDestinationTrackerPawnComponent::UDestinationTrackerPawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceSquared = 0.00f;
}

void UDestinationTrackerPawnComponent::SetDestination(const FVector& InDestination) {
}

void UDestinationTrackerPawnComponent::OnRep_Destination() {
}

bool UDestinationTrackerPawnComponent::HasDestination() const {
    return false;
}

float UDestinationTrackerPawnComponent::GetDistanceSquared() const {
    return DistanceSquared;
}

FRotator UDestinationTrackerPawnComponent::GetDirection() const {
    return FRotator{};
}

FVector UDestinationTrackerPawnComponent::GetDestination() const {
    return FVector{};
}

void UDestinationTrackerPawnComponent::ClearDestination() {
}

void UDestinationTrackerPawnComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDestinationTrackerPawnComponent, Destination);
}


