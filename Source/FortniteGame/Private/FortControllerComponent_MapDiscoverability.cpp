#include "FortControllerComponent_MapDiscoverability.h"
#include "Net/UnrealNetwork.h"

UFortControllerComponent_MapDiscoverability::UFortControllerComponent_MapDiscoverability(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DiscoverabilityMPC = NULL;
    this->bFlipYInput = true;
    this->DiscoveryUnmaskUpdateRate = 0.01f;
    this->StencilMID = NULL;
}

void UFortControllerComponent_MapDiscoverability::UndiscoverAllPois() {
}

void UFortControllerComponent_MapDiscoverability::UndiscoverAllLandmarks() {
}

void UFortControllerComponent_MapDiscoverability::UndiscoverAllAreas() {
}

void UFortControllerComponent_MapDiscoverability::TeleportToAllLocations(float DelayBetween) {
}

void UFortControllerComponent_MapDiscoverability::SetDiscoverStatusByTag(const FString& Tag, bool bDiscovered) {
}

void UFortControllerComponent_MapDiscoverability::PlaylistLoadedStub(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void UFortControllerComponent_MapDiscoverability::EventsReadyStub(const TArray<FString>& Events) {
}

void UFortControllerComponent_MapDiscoverability::DiscoverAllPois() {
}

void UFortControllerComponent_MapDiscoverability::DiscoverAllLandmarks() {
}

void UFortControllerComponent_MapDiscoverability::DiscoverAllAreas() {
}

void UFortControllerComponent_MapDiscoverability::CancelTeleportToAllLocations() {
}

void UFortControllerComponent_MapDiscoverability::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_MapDiscoverability, DiscoveredData);
}


