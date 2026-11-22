#include "PlaysetLevelStreamComponent.h"
#include "Net/UnrealNetwork.h"

UPlaysetLevelStreamComponent::UPlaysetLevelStreamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxStreamInDistance = 0.00f;
    this->bAutoLoadLevel = true;
    this->bAllowUnload = true;
    this->bWaitOnMessageBeforeLoading = true;
    this->CurrentPlayset = NULL;
    this->StreamedLevel = NULL;
}

void UPlaysetLevelStreamComponent::SetPlayset(const UFortPlaysetItemDefinition* NewPlayset) {
}

void UPlaysetLevelStreamComponent::OnRep_ClientPlaysetData() {
}

void UPlaysetLevelStreamComponent::OnFinishedUnloading() {
}

void UPlaysetLevelStreamComponent::OnFinishedLoading() {
}

bool UPlaysetLevelStreamComponent::IsLoading() const {
    return false;
}

UFortPlaysetItemDefinition* UPlaysetLevelStreamComponent::GetCurrentPlayset() const {
    return CurrentPlayset;
}

void UPlaysetLevelStreamComponent::ClearPlayset() {
}

void UPlaysetLevelStreamComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlaysetLevelStreamComponent, CurrentPlayset);
    DOREPLIFETIME(UPlaysetLevelStreamComponent, ClientPlaysetData);
}


