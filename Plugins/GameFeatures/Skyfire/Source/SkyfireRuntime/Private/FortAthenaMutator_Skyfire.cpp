#include "FortAthenaMutator_Skyfire.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Skyfire::AFortAthenaMutator_Skyfire(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemsTypesToKeepOnAbduction.AddDefaulted(4);
    this->TODOverrideActorClass = NULL;
    this->BlockInventoryActionsGE = NULL;
    this->InitialLootRarity = EFortRarity::Uncommon;
    this->MaxLootRarity = EFortRarity::Legendary;
    this->BlockStormCenterActorClass = NULL;
    this->RestartSelectionWeightTimePower = 2.00f;
    this->SquadMemberStatusWidgetExtensionSlot = EUIExtensionSlot::Primary;
    this->SkyfireBotPlayerPawnComponentClass = NULL;
    this->SkyfireAudioManagerClass = NULL;
    this->ClearCachedIndicatorsInterval = 1.00f;
    this->TeleportMutator = NULL;
    this->CurrentPhase = ESkyfirePhase::None;
    this->SkyfireAudioManager = NULL;
    this->TimeOrbCount = 0;
    this->SecurityOrbCount = 0;
}

void AFortAthenaMutator_Skyfire::StartSkyfireWithJustBotPlayers() {
}

void AFortAthenaMutator_Skyfire::OnTimePickup(const AFortPlayerStateAthena* PlayerState) {
}

void AFortAthenaMutator_Skyfire::OnRep_TimeOrbCount(int32 TimeOrbCountPreReplication) {
}

void AFortAthenaMutator_Skyfire::OnRep_SecurityOrbCount(int32 SecurityOrbCountPreReplication) {
}

void AFortAthenaMutator_Skyfire::OnRep_CurrentPhase() {
}

void AFortAthenaMutator_Skyfire::OnRep_BlockStormCenter() {
}

void AFortAthenaMutator_Skyfire::OnPlayerTeleportToPrisonComplete_Internal(AFortPlayerStateAthena* PlayerState) {
}

void AFortAthenaMutator_Skyfire::OnPlayerLootedChest(AFortPlayerPawnAthena* PlayerPawn, ABuildingContainer* LootedContainer) {
}

void AFortAthenaMutator_Skyfire::OnPlayerKnockedOutOfPlayspace(AFortPlayerStateAthena* PlayerState, AActor* HitOutOfBoundsVolume) {
}

void AFortAthenaMutator_Skyfire::OnLootRarityPickup(const AFortPlayerStateAthena* PlayerState) {
}

void AFortAthenaMutator_Skyfire::ModifyTimeOrbCount(const int32 Amount) {
}

void AFortAthenaMutator_Skyfire::ModifySecurityOrbCount(const int32 Amount) {
}

bool AFortAthenaMutator_Skyfire::IsPlayerBeingAbducted(const AFortPlayerStateAthena* PlayerState) const {
    return false;
}

bool AFortAthenaMutator_Skyfire::IsPerformanceFlavorTextEnabled() const {
    return false;
}

bool AFortAthenaMutator_Skyfire::IsPawnLocalOrCurrentlyViewed(const AFortPlayerPawnAthena* InPawnToCheck) const {
    return false;
}

bool AFortAthenaMutator_Skyfire::IsFeelingFlavorTextEnabled() const {
    return false;
}

int32 AFortAthenaMutator_Skyfire::GetTimeOrbCount() const {
    return TimeOrbCount;
}

FSkyfireSquadDataEntry AFortAthenaMutator_Skyfire::GetSkyfireSquadDataEntry(const uint8 SquadId) const {
    return FSkyfireSquadDataEntry{};
}

ESkyfirePhase AFortAthenaMutator_Skyfire::GetSkyfirePhase() const {
    return ESkyfirePhase::None;
}

ASkyfireAudioManager* AFortAthenaMutator_Skyfire::GetSkyfireAudioManager() const {
    return SkyfireAudioManager;
}

void AFortAthenaMutator_Skyfire::GetSkydiveSpawnCircle(FVector& SkydiveSpawnCenter, float& SkydiveSpawnRadius) const {
}

int32 AFortAthenaMutator_Skyfire::GetSecurityOrbCount() const {
    return SecurityOrbCount;
}

TArray<AFortPlayerStateAthena*> AFortAthenaMutator_Skyfire::GetPlayersInMothership(bool bIncludeLootRoom, bool bIncludeBots) const {
    return TArray<AFortPlayerStateAthena*>();
}

int32 AFortAthenaMutator_Skyfire::GetNumberOfPlayersInMothership(bool bIncludeLootRoom, bool bIncludeBots) const {
    return 0;
}

float AFortAthenaMutator_Skyfire::GetInitialTimeBeforeLootRoomTeleport() const {
    return 0.0f;
}

EFortRarity AFortAthenaMutator_Skyfire::GetInitialLootRarity() const {
    return EFortRarity::Common;
}

float AFortAthenaMutator_Skyfire::GetFlavorTextCountdownThreshold() const {
    return 0.0f;
}

void AFortAthenaMutator_Skyfire::ClearCachedIndicators() {
}

void AFortAthenaMutator_Skyfire::ActivateBuildingFoundations() const {
}

void AFortAthenaMutator_Skyfire::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Skyfire, CurrentPhase);
    DOREPLIFETIME(AFortAthenaMutator_Skyfire, CachedBlockStormCenter);
    DOREPLIFETIME(AFortAthenaMutator_Skyfire, TimeOrbCount);
    DOREPLIFETIME(AFortAthenaMutator_Skyfire, SecurityOrbCount);
}


