#include "MolePlayerStateComponent.h"
#include "Net/UnrealNetwork.h"

UMolePlayerStateComponent::UMolePlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerNumber = -1;
    this->GhostGameplayEffect = NULL;
    this->EliminationMarkerClass = NULL;
    this->Role = EMoleRole::Unknown;
    this->bIsRevealedEnemy = false;
    this->bHasLeftGame = false;
    this->KillerPlayerState = NULL;
}

void UMolePlayerStateComponent::SetMoleKiller(APlayerState* Victim, APlayerState* Killer) {
}

void UMolePlayerStateComponent::OnRep_Role() {
}

void UMolePlayerStateComponent::OnRep_PlayerTeleportedData() {
}

void UMolePlayerStateComponent::OnRep_PlayerNumber() {
}

void UMolePlayerStateComponent::OnRep_KillerPlayerState() {
}

void UMolePlayerStateComponent::OnRep_EnemyPlayerStates() {
}

void UMolePlayerStateComponent::OnRep_DeathInfo() {
}

void UMolePlayerStateComponent::OnRep_bIsRevealedEnemy() {
}

void UMolePlayerStateComponent::OnRep_bHasLeftGame() {
}

bool UMolePlayerStateComponent::IsMolePlayerDisconnected(const APlayerState* PlayerState) {
    return false;
}

bool UMolePlayerStateComponent::IsMoleGhost(const APlayerState* PlayerState) {
    return false;
}

bool UMolePlayerStateComponent::IsMoleEnemyFor(const APlayerState* PlayerState, const APlayerState* TargetPlayerState) {
    return false;
}

bool UMolePlayerStateComponent::IsMoleEnemy(const AActor* InActor) {
    return false;
}

bool UMolePlayerStateComponent::IsMoleEliminated(const APlayerState* PlayerState) {
    return false;
}

int32 UMolePlayerStateComponent::GetPlayerNumber() const {
    return PlayerNumber;
}

EMoleRole UMolePlayerStateComponent::GetMoleRole(AController* User) {
    return EMoleRole::Unknown;
}

UFortItemDefinition* UMolePlayerStateComponent::GetMolePlayerItemDefinition(APlayerState* PlayerState) {
    return NULL;
}

void UMolePlayerStateComponent::GetMolePlayerCosmeticData(APlayerState* PlayerState, FMolePlayerCosmeticData& OutPlayerCosmeticData) {
}

void UMolePlayerStateComponent::BlueprintSetIsPlayerGhost(APlayerState* PlayerState, bool bIsPlayerGhost) {
}

void UMolePlayerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMolePlayerStateComponent, PlayerNumber);
    DOREPLIFETIME(UMolePlayerStateComponent, DeathInfo);
    DOREPLIFETIME(UMolePlayerStateComponent, Role);
    DOREPLIFETIME(UMolePlayerStateComponent, EnemyPlayerStates);
    DOREPLIFETIME(UMolePlayerStateComponent, bIsRevealedEnemy);
    DOREPLIFETIME(UMolePlayerStateComponent, bHasLeftGame);
    DOREPLIFETIME(UMolePlayerStateComponent, KillerPlayerState);
    DOREPLIFETIME(UMolePlayerStateComponent, PlayerTeleportedData);
}


