#include "FortLevelStreamComponent.h"
#include "Net/UnrealNetwork.h"

UFortLevelStreamComponent::UFortLevelStreamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoLoadLevel = true;
    this->bAllowUnload = true;
}

void UFortLevelStreamComponent::OnRep_LevelStreamingData() {
}

void UFortLevelStreamComponent::OnLevelRemoved(ULevel* InLevel, UWorld* InWorld) {
}

void UFortLevelStreamComponent::OnLevelAdded(ULevel* InLevel, UWorld* InWorld) {
}

bool UFortLevelStreamComponent::IsLoading() const {
    return false;
}

bool UFortLevelStreamComponent::IsLoaded() const {
    return false;
}

void UFortLevelStreamComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortLevelStreamComponent, LevelStreamingData);
}


