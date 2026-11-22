#include "FortPlayerStateAthena.h"
#include "FortAbilitySystemComponentAthena.h"
#include "Net/UnrealNetwork.h"

AFortPlayerStateAthena::AFortPlayerStateAthena(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFortAbilitySystemComponentAthena>(TEXT("AbilitySystemComponent"))) {
    this->bSkipReplicatedStats = true;
    this->PersonalLobbyAction = 0;
    this->ReplicatedTeamMemberState = ETeamMemberState::None;
    this->TeamMemberState = ETeamMemberState::None;
    this->TeamMemberStateRepTime = 0.00f;
    this->bHasWonAGame = false;
    this->TeamKillScore = 0;
    this->TeamIndex = 0;
    this->TeamScorePlacement = 0;
    this->TeamScore = -1;
    this->Place = 0;
    this->DownScore = 0;
    this->KillScore = 0;
    this->SeasonLevelUIDisplay = 0;
    this->HumanKillScore = 0;
    this->AIKillCount = 0;
    this->NumChestsOpened = 0;
    this->NumAmmoCansOpened = 0;
    this->NumSupplyDropsOpened = 0;
    this->NumLlamasOpened = 0;
    this->NumForagedItemsConsumed = 0;
    this->NumMinutesAlive = 0;
    this->NumBronzeCoinsCollected = 0;
    this->NumSilverCoinsCollected = 0;
    this->NumGoldCoinsCollected = 0;
    this->TotalPlayerScore = 0;
    this->StormSurgeEffectCount = 0;
    this->TeamAverageDamageDealt = 0;
    this->SquadId = 0;
    this->bThankedBusDriver = false;
    this->bDidNotThankBusDriver = false;
    this->bUsingAnonymousMode = false;
    this->bUsingAnonymousCharacterMode = false;
    this->bShowingSeasonLevel = false;
    this->bIsTalking = false;
    this->bIsMuted = false;
    this->SecondsAlive = 0;
    this->TimeOfPawnCreation = 0;
    this->bIsDisconnected = false;
    this->GameModeIcon = NULL;
    this->bResurrectionChipDisabled = false;
    this->bResurrectingNow = false;
    this->RebootCounter = 0;
    this->bHoldsRebootVanLock = false;
    this->MatchAbandonState = EMatchAbandonState::None;
    this->bIsAnAthenaGameParticipant = true;
    this->bIsContributingToOverbudgetHeatmap = false;
    this->bPreserveSquad = false;
    this->KeepPlayingTogetherVotingStatus = EKeepPlayingTogetherVotingStatus::Undecided;
    this->InitialSquadSize = 0;
    this->SquadSizeIncrements = 0;
    this->SquadSizeDecrements = 0;
    this->bInventoriesInNonPersistenceMode = false;
}

EDeathCause AFortPlayerStateAthena::ToDeathCause(const FGameplayTagContainer& InTags, bool bWasDBNO) {
    return EDeathCause::OutsideSafeZone;
}

void AFortPlayerStateAthena::SetIsContributingToOverbudgetHeatmap(bool bContributingToOverbudget) {
}

void AFortPlayerStateAthena::Server_TogglePreserveSquad_Implementation() {
}
bool AFortPlayerStateAthena::Server_TogglePreserveSquad_Validate() {
    return true;
}

void AFortPlayerStateAthena::Server_SetKeepPlayingTogetherVotingStatus_Implementation(EKeepPlayingTogetherVotingStatus NewStatus) {
}
bool AFortPlayerStateAthena::Server_SetKeepPlayingTogetherVotingStatus_Validate(EKeepPlayingTogetherVotingStatus NewStatus) {
    return true;
}

void AFortPlayerStateAthena::Server_SetCanEditCreativeIsland_Implementation(bool bCanEdit, const TArray<FString>& WhiteList) {
}
bool AFortPlayerStateAthena::Server_SetCanEditCreativeIsland_Validate(bool bCanEdit, const TArray<FString>& WhiteList) {
    return true;
}

void AFortPlayerStateAthena::OnSquadSpecificContainerSpawned(ABuildingContainer* SpawnedContainer) {
}

void AFortPlayerStateAthena::OnSquadSpecificContainerDestroyed(ABuildingContainer* DestroyedContainer) {
}

void AFortPlayerStateAthena::OnRep_TotalPlayerScore() {
}

void AFortPlayerStateAthena::OnRep_ThankedBusDriver() {
}

void AFortPlayerStateAthena::OnRep_TeamScorePlacement() {
}

void AFortPlayerStateAthena::OnRep_TeamScore() {
}

void AFortPlayerStateAthena::OnRep_TeamKillScore() {
}

void AFortPlayerStateAthena::OnRep_TeamIndex(uint8 OldVal) {
}

void AFortPlayerStateAthena::OnRep_TeamAverageDamageDealt() {
}

void AFortPlayerStateAthena::OnRep_StormSurgeEffectCount() {
}

void AFortPlayerStateAthena::OnRep_SquadId() {
}

void AFortPlayerStateAthena::OnRep_SimpleMetricInformation() {
}

void AFortPlayerStateAthena::OnRep_SeasonLevelUIDisplay() {
}

void AFortPlayerStateAthena::OnRep_ResurrectionChipReplicated() {
}

void AFortPlayerStateAthena::OnRep_ResurrectingNow(const bool bPreviousResurrectingNow) {
}

void AFortPlayerStateAthena::OnRep_ReplicatedTeamMemberState() {
}

void AFortPlayerStateAthena::OnRep_RebootCounter() {
}

void AFortPlayerStateAthena::OnRep_PreserveSquad() {
}

void AFortPlayerStateAthena::OnRep_Place() {
}

void AFortPlayerStateAthena::OnRep_NumSupplyDropsOpened() {
}

void AFortPlayerStateAthena::OnRep_NumSilverCoinsCollected() {
}

void AFortPlayerStateAthena::OnRep_NumMinutesAlive() {
}

void AFortPlayerStateAthena::OnRep_NumLlamasOpened() {
}

void AFortPlayerStateAthena::OnRep_NumGoldCoinsCollected() {
}

void AFortPlayerStateAthena::OnRep_NumForagedItemsConsumed() {
}

void AFortPlayerStateAthena::OnRep_NumChestsOpened() {
}

void AFortPlayerStateAthena::OnRep_NumBronzeCoinsCollected() {
}

void AFortPlayerStateAthena::OnRep_NumAmmoCansOpened() {
}

void AFortPlayerStateAthena::OnRep_MetricInformation() {
}

void AFortPlayerStateAthena::OnRep_MatchAbandonState(const EMatchAbandonState PrevMatchAbandonState) {
}

void AFortPlayerStateAthena::OnRep_Kills() {
}

void AFortPlayerStateAthena::OnRep_KeepPlayingTogetherVotingStatus() {
}

void AFortPlayerStateAthena::OnRep_IsContributingToOverbudgetHeatmap() {
}

void AFortPlayerStateAthena::OnRep_InventoriesInNonPersistenceMode() {
}

void AFortPlayerStateAthena::OnRep_Downs() {
}

void AFortPlayerStateAthena::OnRep_DidNotThankBusDriver() {
}

void AFortPlayerStateAthena::OnRep_DeathInfo() {
}

void AFortPlayerStateAthena::OnRep_ChangeTeamInfo() {
}

void AFortPlayerStateAthena::OnRep_AIKills() {
}

void AFortPlayerStateAthena::OnInteractionEventOccurred(FGameplayTagContainer& InteractionTargetTags) {
}

bool AFortPlayerStateAthena::IsSquadDead() const {
    return false;
}

bool AFortPlayerStateAthena::IsResurrectionChipAvailable() const {
    return false;
}

bool AFortPlayerStateAthena::IsResurrectingNow() const {
    return bResurrectingNow;
}

bool AFortPlayerStateAthena::IsInSquad() const {
    return false;
}

bool AFortPlayerStateAthena::IsDisconnected() const {
    return false;
}

UFortControllerComponent_TransientQuests* AFortPlayerStateAthena::GetTransientQuestsComponent() const {
    return NULL;
}

uint8 AFortPlayerStateAthena::GetTeam() const {
    return 0;
}

int32 AFortPlayerStateAthena::GetSquadMemberIndex() const {
    return 0;
}

uint8 AFortPlayerStateAthena::GetSquadID() const {
    return 0;
}

TSoftObjectPtr<UTexture2D> AFortPlayerStateAthena::GetSocialAvatarBrush(const bool bSmallImage) const {
    return NULL;
}

float AFortPlayerStateAthena::GetRemainingResurrectionChipExpirationTime() const {
    return 0.0f;
}

FLinearColor AFortPlayerStateAthena::GetPinColorBySquadMemberIndex(int32 SquadIndex) {
    return FLinearColor{};
}

FLinearColor AFortPlayerStateAthena::GetPinColor() const {
    return FLinearColor{};
}

int32 AFortPlayerStateAthena::GetKillScore() const {
    return KillScore;
}

bool AFortPlayerStateAthena::GetInventoriesInNonPersistenceMode() const {
    return bInventoriesInNonPersistenceMode;
}

FDeathInfo AFortPlayerStateAthena::GetDeathInfo() const {
    return FDeathInfo{};
}

void AFortPlayerStateAthena::ClientReportTournamentStatUpdate_Implementation(const FFortTournamentStatInfo& TournamentStatInfo) const {
}

void AFortPlayerStateAthena::ClientReportTeamKill_Implementation(int32 TeamKills) {
}

void AFortPlayerStateAthena::ClientReportKill_Implementation(const AFortPlayerStateAthena* Player) {
}

void AFortPlayerStateAthena::ClientReportDBNO_Implementation(const AFortPlayerStateAthena* Player) {
}

void AFortPlayerStateAthena::ClientNotifyMatchEntered_Implementation(const FEventTournamentIds& EventIds) {
}

void AFortPlayerStateAthena::ClientAddKillFeedErrorMessage_Implementation(const TArray<FFortCreativeMessageDispatcherErrorMessage>& ErrorMessages) {
}

void AFortPlayerStateAthena::Client_OnNewLevel_Implementation(int32 NewLevel) {
}

bool AFortPlayerStateAthena::CanEditCreativeIsland() const {
    return false;
}

bool AFortPlayerStateAthena::CanBeResurrected() const {
    return false;
}

void AFortPlayerStateAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerStateAthena, PersonalLobbyAction);
    DOREPLIFETIME(AFortPlayerStateAthena, ReplicatedTeamMemberState);
    DOREPLIFETIME(AFortPlayerStateAthena, TeamKillScore);
    DOREPLIFETIME(AFortPlayerStateAthena, TeamIndex);
    DOREPLIFETIME(AFortPlayerStateAthena, TeamScorePlacement);
    DOREPLIFETIME(AFortPlayerStateAthena, TeamScore);
    DOREPLIFETIME(AFortPlayerStateAthena, Place);
    DOREPLIFETIME(AFortPlayerStateAthena, DownScore);
    DOREPLIFETIME(AFortPlayerStateAthena, KillScore);
    DOREPLIFETIME(AFortPlayerStateAthena, SeasonLevelUIDisplay);
    DOREPLIFETIME(AFortPlayerStateAthena, NumChestsOpened);
    DOREPLIFETIME(AFortPlayerStateAthena, NumAmmoCansOpened);
    DOREPLIFETIME(AFortPlayerStateAthena, NumSupplyDropsOpened);
    DOREPLIFETIME(AFortPlayerStateAthena, NumLlamasOpened);
    DOREPLIFETIME(AFortPlayerStateAthena, NumForagedItemsConsumed);
    DOREPLIFETIME(AFortPlayerStateAthena, NumMinutesAlive);
    DOREPLIFETIME(AFortPlayerStateAthena, NumBronzeCoinsCollected);
    DOREPLIFETIME(AFortPlayerStateAthena, NumSilverCoinsCollected);
    DOREPLIFETIME(AFortPlayerStateAthena, NumGoldCoinsCollected);
    DOREPLIFETIME(AFortPlayerStateAthena, TotalPlayerScore);
    DOREPLIFETIME(AFortPlayerStateAthena, StormSurgeEffectCount);
    DOREPLIFETIME(AFortPlayerStateAthena, TeamAverageDamageDealt);
    DOREPLIFETIME(AFortPlayerStateAthena, SquadId);
    DOREPLIFETIME(AFortPlayerStateAthena, bThankedBusDriver);
    DOREPLIFETIME(AFortPlayerStateAthena, bDidNotThankBusDriver);
    DOREPLIFETIME(AFortPlayerStateAthena, bUsingAnonymousMode);
    DOREPLIFETIME(AFortPlayerStateAthena, bUsingAnonymousCharacterMode);
    DOREPLIFETIME(AFortPlayerStateAthena, bShowingSeasonLevel);
    DOREPLIFETIME(AFortPlayerStateAthena, PlayerNameCustomOverride);
    DOREPLIFETIME(AFortPlayerStateAthena, MetricInformation);
    DOREPLIFETIME(AFortPlayerStateAthena, SimpleMetricInformation);
    DOREPLIFETIME(AFortPlayerStateAthena, bIsDisconnected);
    DOREPLIFETIME(AFortPlayerStateAthena, DeathInfo);
    DOREPLIFETIME(AFortPlayerStateAthena, ChangeTeamInfo);
    DOREPLIFETIME(AFortPlayerStateAthena, ResurrectionChipAvailable);
    DOREPLIFETIME(AFortPlayerStateAthena, bResurrectingNow);
    DOREPLIFETIME(AFortPlayerStateAthena, RebootCounter);
    DOREPLIFETIME(AFortPlayerStateAthena, bHoldsRebootVanLock);
    DOREPLIFETIME(AFortPlayerStateAthena, MatchAbandonState);
    DOREPLIFETIME(AFortPlayerStateAthena, bIsAnAthenaGameParticipant);
    DOREPLIFETIME(AFortPlayerStateAthena, bIsContributingToOverbudgetHeatmap);
    DOREPLIFETIME(AFortPlayerStateAthena, BotUniqueId);
    DOREPLIFETIME(AFortPlayerStateAthena, bPreserveSquad);
    DOREPLIFETIME(AFortPlayerStateAthena, KeepPlayingTogetherVotingStatus);
    DOREPLIFETIME(AFortPlayerStateAthena, InitialSquadSize);
    DOREPLIFETIME(AFortPlayerStateAthena, SquadSizeIncrements);
    DOREPLIFETIME(AFortPlayerStateAthena, SquadSizeDecrements);
    DOREPLIFETIME(AFortPlayerStateAthena, bInventoriesInNonPersistenceMode);
}


