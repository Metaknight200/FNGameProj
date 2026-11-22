#include "KiwiControllerComponent.h"
#include "Net/UnrealNetwork.h"

UKiwiControllerComponent::UKiwiControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrisonTeleportSquadStart = NULL;
}


void UKiwiControllerComponent::RegisterLocalSpaceMannequin(AFortPlayerMannequin* SpacePlayerMannequin, const int32 MannequinIndex) {
}

void UKiwiControllerComponent::PlayPrisonAlienPatrolSequence() {
}


void UKiwiControllerComponent::OnSkyTubeChanged(AFortPlayerPawn* Pawn, AFortSkyTube* NewSkyTube, AFortSkyTube* OldSkyTube) {
}

void UKiwiControllerComponent::OnPlayerPawnPossessed(APawn* PossessedPawn) {
}

void UKiwiControllerComponent::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, uint8 PreviousCustomMode) {
}

AFortSquadStart* UKiwiControllerComponent::GetPrisonTeleportSquadStart() const {
    return PrisonTeleportSquadStart;
}


void UKiwiControllerComponent::ClientZapPawns_Implementation(const TArray<AFortPlayerPawn*>& PawnsToKill, const FGameplayTag& ZapReason) {
}

void UKiwiControllerComponent::ClientSetupSpaceMannequins_Implementation(const TArray<AFortPlayerPawn*>& PlayerPawnsToLoadoutCopy) {
}

void UKiwiControllerComponent::ClientSetEnableKevinCubeInteract_Implementation(const AKiwiKevinCubeInteractActor* KevinCubeInteractActor, bool bInteracting) {
}

void UKiwiControllerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UKiwiControllerComponent, PrisonTeleportSquadStart);
}


