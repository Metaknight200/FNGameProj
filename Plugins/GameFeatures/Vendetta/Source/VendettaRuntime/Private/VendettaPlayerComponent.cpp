#include "VendettaPlayerComponent.h"
#include "GenericMessageQueue.h"
#include "Net/UnrealNetwork.h"

UVendettaPlayerComponent::UVendettaPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HuntedStatus = EVendettaHuntedStatus::NotHunted;
    this->MasterHunterHuntedStatus = EVendettaHuntedStatus::NotHunted;
    this->HunterStatus = EVendettaHuntedStatus::NotHunted;
    this->TopUIMessageQueue = CreateDefaultSubobject<UGenericMessageQueue>(TEXT("TopUIMessageQueue"));
    this->ManagingMutator = NULL;
}

void UVendettaPlayerComponent::SetActiveBountyPuckGuid(FGuid InBountyPuckGuid, bool bPreviousBountyWasCompleted) {
}

void UVendettaPlayerComponent::OnRep_TargetMarkedStatusData() {
}

void UVendettaPlayerComponent::OnRep_SquadmateHuntedStatuses() {
}

void UVendettaPlayerComponent::OnRep_ManagingMutator() {
}

void UVendettaPlayerComponent::OnRep_HunterStatus() {
}

void UVendettaPlayerComponent::OnRep_ActiveBountyPuckGuid() {
}

void UVendettaPlayerComponent::HandleCreditsPickedUp(AFortPlayerStateAthena* Player, int32 Amount) {
}

void UVendettaPlayerComponent::HandleClientStartedRespawn(AFortPlayerControllerZone* PlayerController) {
}

void UVendettaPlayerComponent::HandleClientLandedFromBus(AFortPlayerControllerZone* PlayerController) {
}

void UVendettaPlayerComponent::HandleBountyPuckRarityChanged(FGuid TrackerGuid, EFortRarity NewRarity) {
}

int32 UVendettaPlayerComponent::GetMasterHunterCurrentTokens() const {
    return 0;
}

AFortAthenaMutator_Vendetta* UVendettaPlayerComponent::GetManagingMutator() const {
    return ManagingMutator;
}

AFortPlayerStateAthena* UVendettaPlayerComponent::GetActiveBountyPuckTarget() const {
    return NULL;
}

FGuid UVendettaPlayerComponent::GetActiveBountyPuckGuid() const {
    return FGuid{};
}

void UVendettaPlayerComponent::ClientPlayDeathMusic_Implementation(USoundBase* DeathMusic) {
}

void UVendettaPlayerComponent::ClientOnKilledNonTarget_Implementation(const AFortPlayerStateAthena* VictimPlayerState, const int32 VictimRewardValue) {
}

void UVendettaPlayerComponent::ClientOnBountyPuckTargetDied_Implementation(const AFortPlayerStateAthena* VictimPlayerState, const AFortPlayerStateAthena* KillerPlayerState, const AFortPlayerStateAthena* NewTargetPlayerState, const int32 VictimRewardValue, const int32 VictimBonusValue) {
}

void UVendettaPlayerComponent::ClientOnBountyPuckReceivedByAlly_Implementation(const AFortPlayerStateAthena* BountyPuckTargetPlayerState, const AFortPlayerStateAthena* ReceiverPlayerState, int32 BonusRewardValue) {
}

void UVendettaPlayerComponent::ClearActiveBountyPuckGuid() {
}

void UVendettaPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVendettaPlayerComponent, TargetMarkedStatusData);
    DOREPLIFETIME(UVendettaPlayerComponent, HunterStatus);
    DOREPLIFETIME(UVendettaPlayerComponent, SquadmateHuntedStatuses);
    DOREPLIFETIME(UVendettaPlayerComponent, ManagingMutator);
    DOREPLIFETIME(UVendettaPlayerComponent, ActiveBountyPuckGuid);
    DOREPLIFETIME(UVendettaPlayerComponent, ActiveBountyTargetDataArray);
}


