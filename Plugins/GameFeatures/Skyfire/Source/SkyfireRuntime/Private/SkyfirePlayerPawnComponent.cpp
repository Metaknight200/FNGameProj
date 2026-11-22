#include "SkyfirePlayerPawnComponent.h"
#include "Net/UnrealNetwork.h"

USkyfirePlayerPawnComponent::USkyfirePlayerPawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedSkyfireMutator = NULL;
    this->TeleportToLootRoomTime = -1.00f;
    this->EarnedLootRarity = EFortRarity::Common;
    this->bInMothership = false;
    this->TimeUntilTeleportToLootRoomReachedCapCounter = 0;
    this->ExitLootRoomTime = -1.00f;
    this->ExitInitialPrisonTime = -1.00f;
    this->AbductionTeleportStartTime = -1.00f;
}

void USkyfirePlayerPawnComponent::ServerOnQuickBarDataRecorded_Implementation() {
}

void USkyfirePlayerPawnComponent::RemoveAllPlayspaceActorMarkersOnClient() {
}

void USkyfirePlayerPawnComponent::OnRep_TimeUntilTeleportToLootRoomReachedCapCounter() {
}

void USkyfirePlayerPawnComponent::OnRep_TeleportToLootRoomTime() {
}

void USkyfirePlayerPawnComponent::OnRep_ExitLootRoomTime() {
}

void USkyfirePlayerPawnComponent::OnRep_ExitInitialPrisonTime() {
}

void USkyfirePlayerPawnComponent::OnRep_EarnedLootRarity() {
}

void USkyfirePlayerPawnComponent::OnRep_bInMothership() {
}

void USkyfirePlayerPawnComponent::OnPlayerLootedContainer(AFortPlayerPawnAthena* FortPlayerPawnAthena, ABuildingContainer* LootedContainer) {
}

void USkyfirePlayerPawnComponent::MarkPlayspaceActorOnClient(AActor* ActorToBeMarked, const bool bUseHoveredMarkerDetail) {
}

bool USkyfirePlayerPawnComponent::IsInMothership() const {
    return bInMothership;
}

float USkyfirePlayerPawnComponent::GetTimeUntilTeleportToLootRoom() const {
    return 0.0f;
}

float USkyfirePlayerPawnComponent::GetTeleportToLootRoomTime() const {
    return TeleportToLootRoomTime;
}

float USkyfirePlayerPawnComponent::GetSecondsUntil(const float Time) const {
    return 0.0f;
}

float USkyfirePlayerPawnComponent::GetExitLootRoomTime() const {
    return ExitLootRoomTime;
}

float USkyfirePlayerPawnComponent::GetExitInitialPrisonTime() const {
    return ExitInitialPrisonTime;
}

EFortRarity USkyfirePlayerPawnComponent::GetEarnedLootRarity() const {
    return EFortRarity::Common;
}

void USkyfirePlayerPawnComponent::ClientRecordQuickBarData_Implementation() {
}

void USkyfirePlayerPawnComponent::ClientPlayerKnockedOutPenaltyComplete_Implementation() {
}

void USkyfirePlayerPawnComponent::ClientPlayerKnockedOutOfPlayspace_Implementation() {
}

void USkyfirePlayerPawnComponent::ClientPlayerExitingPlayspace_Implementation(const bool bFromWarpTunnel) {
}

void USkyfirePlayerPawnComponent::ClientPlayerEnteringPlayspace_Implementation() {
}

void USkyfirePlayerPawnComponent::ClientPlayerEnteringMainMap_Implementation(const AFortPlayerPawnAthena* PlayerPawn) {
}

void USkyfirePlayerPawnComponent::ClientPlayerEnteringLootRoom_Implementation() {
}

void USkyfirePlayerPawnComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USkyfirePlayerPawnComponent, CachedSkyfireMutator);
    DOREPLIFETIME(USkyfirePlayerPawnComponent, TeleportToLootRoomTime);
    DOREPLIFETIME(USkyfirePlayerPawnComponent, EarnedLootRarity);
    DOREPLIFETIME(USkyfirePlayerPawnComponent, bInMothership);
    DOREPLIFETIME(USkyfirePlayerPawnComponent, TimeUntilTeleportToLootRoomReachedCapCounter);
    DOREPLIFETIME(USkyfirePlayerPawnComponent, ExitLootRoomTime);
    DOREPLIFETIME(USkyfirePlayerPawnComponent, ExitInitialPrisonTime);
}


