#include "PlayspaceManagerComponent.h"
#include "Net/UnrealNetwork.h"

UPlayspaceManagerComponent::UPlayspaceManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->RootPlayspace = NULL;
}

bool UPlayspaceManagerComponent::ProcessOverlapEvents(float DeltaTime) {
    return false;
}

void UPlayspaceManagerComponent::OnRep_RootPlayspace() {
}

void UPlayspaceManagerComponent::OnPlayerEndOverlapGameplayVolume(APlayerState* PlayerState, AGameplayVolume* Volume) {
}

void UPlayspaceManagerComponent::OnPlayerBeginOverlapGameplayVolume(APlayerState* PlayerState, AGameplayVolume* Volume) {
}

void UPlayspaceManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayspaceManagerComponent, RootPlayspace);
}


