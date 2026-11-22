#include "FortMinigameVolumeComponent.h"
#include "Net/UnrealNetwork.h"

UFortMinigameVolumeComponent::UFortMinigameVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentMinigameSettingsMachine = NULL;
    this->MinigameClass = NULL;
    this->CurrentMinigame = NULL;
}

void UFortMinigameVolumeComponent::OnRep_CurrentMinigame() {
}

void UFortMinigameVolumeComponent::OnClientExitVolume(APlayerState* InPlayerState, AFortVolume* InVolume) {
}

void UFortMinigameVolumeComponent::OnClientEnterVolume(APlayerState* InPlayerState, AFortVolume* InVolume) {
}

void UFortMinigameVolumeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMinigameVolumeComponent, MinigameClass);
    DOREPLIFETIME(UFortMinigameVolumeComponent, CurrentMinigame);
}


