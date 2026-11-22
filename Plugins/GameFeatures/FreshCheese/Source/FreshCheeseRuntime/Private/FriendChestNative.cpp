#include "FriendChestNative.h"
#include "Net/UnrealNetwork.h"

AFriendChestNative::AFriendChestNative(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AssociatedSquadID = 0;
    this->MinimapIndicator = NULL;
    this->Analytics = NULL;
}

void AFriendChestNative::SimulateDisconnect(const TArray<FString>& SquadUserIds) {
}

void AFriendChestNative::RollInstancedLootForSquadMembers(AGameModeBase* GameMode, const uint8 SquadId) {
}

void AFriendChestNative::ResetLootTierForAssociatedSquad(bool bOnlyAlive) {
}




void AFriendChestNative::OnXpEvent(const FXPEventInfo& XPEvent) {
}

void AFriendChestNative::OnTriggerComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFriendChestNative::OnTriggerComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFriendChestNative::OnPlayerTimeout(const AFortPlayerStateAthena* Player) {
}


void AFriendChestNative::OnPlayerLeave(const AFortPlayerStateAthena* Player) {
}

void AFriendChestNative::OnPlayerHit(const AFortPlayerStateAthena* Player, const bool bWasSuccessful) {
}

void AFriendChestNative::OnPlayerEnter(const AFortPlayerStateAthena* Player) {
}

void AFriendChestNative::HandlePlayerDeadStateChanged(AFortPlayerStateAthena* PlayerState, bool bIsDead) {
}

FTransform AFriendChestNative::GetWeakpointTransformForButtonID(const UInstancedStaticMeshComponent* InstancedStaticMesh, const int32 InstanceIndex, const FVector& WeakpointOffset) const {
    return FTransform{};
}

int32 AFriendChestNative::GetNumTargetsForNextRound(const int32 SquadSize, const int32 RemainingTargets) const {
    return 0;
}

void AFriendChestNative::GetAssociatedSquadMembers(bool bIncludeDead, bool bIncludeResurectable, bool bIncludeDisconnected, TArray<AFortPlayerStateAthena*>& OutSquadMembers) const {
}

uint8 AFriendChestNative::GetAssociatedSquadID() const {
    return AssociatedSquadID;
}

void AFriendChestNative::CreateIndicators() {
}

void AFriendChestNative::ClearSimulatedDisconnects() {
}

float AFriendChestNative::CalculatePlayerChangedAlpha(const int32 NumberInPosition, const int32 Delta, const float Alpha) const {
    return 0.0f;
}

void AFriendChestNative::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFriendChestNative, AssociatedSquadID);
}


