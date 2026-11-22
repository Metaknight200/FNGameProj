#include "FortAthenaMutator_Vendetta.h"
#include "FortBotNameSettings.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Vendetta::AFortAthenaMutator_Vendetta(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MasterHunterHuntingMessageDelay = 3.00f;
    this->MasterHunterSpawnedSound = NULL;
    this->TargetNearbySound = NULL;
    this->TargetKilledSound = NULL;
    this->LocalPlayerKilledSound = NULL;
    this->LocalPlayerKilledByMasterHunterSound = NULL;
    this->LocalPlayerRespawnSound = NULL;
    this->ActiveBountyQuestToGrantDef = NULL;
    this->MasterHunterTargetQuestToGrantDef = NULL;
    this->BountyTargetQuestToGrantDef = NULL;
    this->CloserAISpawnerData = NULL;
    this->SniperAISpawnerData = NULL;
    this->TankAISpawnerData = NULL;
    this->MasterHunterAISpawnerData = NULL;
    this->AIHunterNameSettings = CreateDefaultSubobject<UFortBotNameSettings>(TEXT("AIHunterNameSettings"));
    this->HunterAIWeaponDroppedOnDeathTag = TEXT("DroppedHunterAIWeapon");
    this->HunterAIBehaviorTree = NULL;
    this->StartingBountyPuckGiveGamePhase = EAthenaGamePhase::Aircraft;
    this->BountyPuckItemDef = NULL;
    this->VendettaMarkAIComponentClass = NULL;
    this->MasterHunterSpawnLocationQuery = NULL;
    this->WaxPickupSpawnLocationQuery = NULL;
    this->WaxPickupSpawnLocationQueryPerfAlternate = NULL;
    this->HunterAICantinaBehaviorTree = NULL;
    this->EQSActorSpawnerMutator = NULL;
}

void AFortAthenaMutator_Vendetta::UnregisterBountyPuckWeaponComponent(FGuid TrackerGuid, UBountyPuckWeaponComponent* BountyPuckWeaponComponent) {
}

void AFortAthenaMutator_Vendetta::ShowUIMessageToAllClients(FText MessageText) {
}

void AFortAthenaMutator_Vendetta::RegisterBountyPuckWeaponComponent(FGuid TrackerGuid, UBountyPuckWeaponComponent* BountyPuckWeaponComponent) {
}

void AFortAthenaMutator_Vendetta::OnRep_ReplicatedUIMessage() {
}

void AFortAthenaMutator_Vendetta::OnRep_MasterHunterPlayerState() {
}

void AFortAthenaMutator_Vendetta::OnRep_BountyPuckTargetingData() {
}

void AFortAthenaMutator_Vendetta::MulticastOnMasterHunterDied_Implementation(AFortPlayerStateAthena* MasterHuntersKiller) {
}

void AFortAthenaMutator_Vendetta::MulticastOnHuntersSpawned_Implementation(FName SpawnGroup) {
}

bool AFortAthenaMutator_Vendetta::HasMasterHunterSpawned() const {
    return false;
}

void AFortAthenaMutator_Vendetta::HandleHunterAISpawned(APawn* SpawnedAI, const UFortAthenaAISpawnerData* SpawnerData, const UEQSActorSpawner* EQSActorSpawner) {
}

FVendettaBountyPuckTargetData AFortAthenaMutator_Vendetta::GetBountyPuckTargetDataCopyForGuid(const FGuid& BountyPuckTrackerGuid) const {
    return FVendettaBountyPuckTargetData{};
}

EFortRarity AFortAthenaMutator_Vendetta::GetBountyPuckRarityForGuid(const FGuid& BountyPuckTrackerGuid) const {
    return EFortRarity::Common;
}

void AFortAthenaMutator_Vendetta::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Vendetta, MasterHunterPlayerState);
    DOREPLIFETIME(AFortAthenaMutator_Vendetta, ReplicatedUIMessage);
    DOREPLIFETIME(AFortAthenaMutator_Vendetta, BountyPuckTargetingData);
    DOREPLIFETIME(AFortAthenaMutator_Vendetta, VendettaPlayerDataList);
}


