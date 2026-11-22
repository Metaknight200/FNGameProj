#include "FortAthenaMutator_SpecialEvent.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_SpecialEvent::AFortAthenaMutator_SpecialEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bNetworkDormantWhenDeactivated = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->bPlayersAreInvincible = false;
    this->MinimumScoreBumpForAutomadeGoal = 45;
    this->ScoreBrackets.AddDefaulted(11);
    this->bEnforceInfiniteWarmup = false;
    this->bAllowInventoryOpen = true;
    this->bBlockTeamIndicators = true;
    this->EventAircraft = NULL;
    this->EventAircraftClass = NULL;
    this->ScriptActor = NULL;
    this->bDisableHUD = false;
    this->GameResumed = 0;
    this->bParachutesDisabled = false;
    this->bCanStreamBuildingFoundationsIn = true;
    this->AllPlayerTeleportedCount = 0;
    this->WeightForContainerLootRoll = 0.00f;
    this->SpecialEventsInputComponent = NULL;
    this->bLockingOnFocalPoint = false;
    this->bCanToggleCursorModeInStasis = false;
}

void AFortAthenaMutator_SpecialEvent::WarmUpIslandUpdated() {
}

void AFortAthenaMutator_SpecialEvent::ToggleHUDs(bool bHide) {
}

void AFortAthenaMutator_SpecialEvent::ToggleDisableWeapons(bool bDisableWeapons) {
}

void AFortAthenaMutator_SpecialEvent::ToggleDisableParachutes(bool bDisable) {
}

void AFortAthenaMutator_SpecialEvent::ToggleAllPlayersInvincibility(bool bInvincible) {
}

void AFortAthenaMutator_SpecialEvent::TeleportAllPlayers(FGameplayTagContainer EventTags, int32 TeleportsPerFrame, int32 SafeZoneIndex) {
}

void AFortAthenaMutator_SpecialEvent::SwapBodyParts(const int32 ArrayIndex, AFortPlayerController* FortPC) {
}

void AFortAthenaMutator_SpecialEvent::StartSafeZoneOverrideForEvent(int32 SafeZoneIndexForEvent) {
}

void AFortAthenaMutator_SpecialEvent::ShrinkSafeZone() {
}

void AFortAthenaMutator_SpecialEvent::SetWeightForContainerLootRoll(const float Weight) {
}

void AFortAthenaMutator_SpecialEvent::SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu) {
}

void AFortAthenaMutator_SpecialEvent::SetNamedWeightForContainerLootRoll(const FName WeightName) {
}

void AFortAthenaMutator_SpecialEvent::SetMatchTime(int32 NewMatchTime) {
}

void AFortAthenaMutator_SpecialEvent::SetLockingOnFocalPoint(bool bInLockingOnFocalPoint) {
}

void AFortAthenaMutator_SpecialEvent::SetIsSimulatingDamage(bool bIsSimulating) {
}

void AFortAthenaMutator_SpecialEvent::SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm) {
}

void AFortAthenaMutator_SpecialEvent::SetCanStreamBuildingFoundationsIn(bool bEnable) {
}

void AFortAthenaMutator_SpecialEvent::SetAdditionalViewpoint(FVector WorldLocation) {
}

void AFortAthenaMutator_SpecialEvent::SendToNightNight() {
}

void AFortAthenaMutator_SpecialEvent::ResumeWinCondition() {
}

void AFortAthenaMutator_SpecialEvent::ResetWinConditionProgressToZero() {
}

void AFortAthenaMutator_SpecialEvent::ResetWinCondition() {
}

void AFortAthenaMutator_SpecialEvent::ResetSpecialEventAircraft() {
}

void AFortAthenaMutator_SpecialEvent::ResetSafeZoneOverrideAfterEvent(int32 MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu) {
}

void AFortAthenaMutator_SpecialEvent::ResetMatchTimeToPrevious() {
}

void AFortAthenaMutator_SpecialEvent::RemoveFromBlockedNativeActions(const FGameplayTagContainer& Actions) {
}

void AFortAthenaMutator_SpecialEvent::PushSpecialEventEmoteInputComponent() {
}

void AFortAthenaMutator_SpecialEvent::PopSpecialEventEmoteInputComponent() {
}

void AFortAthenaMutator_SpecialEvent::PlacePlayersInAircraft() {
}

void AFortAthenaMutator_SpecialEvent::PauseWinCondition(bool bLockScores) {
}

void AFortAthenaMutator_SpecialEvent::PauseSupplyDrops(bool bPause) {
}

void AFortAthenaMutator_SpecialEvent::PauseStormProgression(bool bPause) {
}

void AFortAthenaMutator_SpecialEvent::PauseStormDamage(bool bPause) {
}

void AFortAthenaMutator_SpecialEvent::OnWarmUpTeleportComplete(AFortPlayerPawn* PlayerPawn) {
}

void AFortAthenaMutator_SpecialEvent::OnRep_LastCSVEventName() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_GameResumed() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_DelayPlayersFromReturningToLobbyData() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_bPlayersAreInvincible() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_bLockingOnFocalPoint() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_bDisableHUD() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_bCanStreamBuildingFoundationsIn() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_AllPlayerTeleportedCount() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_Aircraft() {
}

void AFortAthenaMutator_SpecialEvent::OnRep_AdditionalViewpoint() {
}

void AFortAthenaMutator_SpecialEvent::OnGameViewportActivationChanged(bool bHasFocus) {
}

void AFortAthenaMutator_SpecialEvent::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_SpecialEvent::OnAircraftFlightEnded(AFortAthenaAircraft* FortAthenaAircraft) {
}

void AFortAthenaMutator_SpecialEvent::OnAircraftExitedDropZone(AFortAthenaAircraft* FortAthenaAircraft) {
}

void AFortAthenaMutator_SpecialEvent::OnAircraftEnteredDropZone(AFortAthenaAircraft* FortAthenaAircraft) {
}

void AFortAthenaMutator_SpecialEvent::NotifyClientsGameResumed() {
}

void AFortAthenaMutator_SpecialEvent::JumpToSafeZonePhase(FVector PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance) {
}

ASpecialEventScript* AFortAthenaMutator_SpecialEvent::GetScript() const {
    return NULL;
}

void AFortAthenaMutator_SpecialEvent::ForceSafeZoneFinalLocation(FVector NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle) {
}

void AFortAthenaMutator_SpecialEvent::FlushUnhandledPlayerControllers() {
}

void AFortAthenaMutator_SpecialEvent::CloseParachutes() {
}

void AFortAthenaMutator_SpecialEvent::ClearBlockedNativeActions() {
}

void AFortAthenaMutator_SpecialEvent::ClearAdditionalViewpoint() {
}

void AFortAthenaMutator_SpecialEvent::ChangeWinCondition(float NewGoalScore) {
}

void AFortAthenaMutator_SpecialEvent::AutobalanceTargetScore() {
}

void AFortAthenaMutator_SpecialEvent::AddToBlockedNativeActions(const FGameplayTagContainer& Actions, const bool bCancelAbilities) {
}

void AFortAthenaMutator_SpecialEvent::AddCSVEvent(const FString& CSVEventName, bool bShouldRepToClient) {
}

void AFortAthenaMutator_SpecialEvent::AddClientCSVEvent(const FString& CSVEventName) {
}

void AFortAthenaMutator_SpecialEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, bPlayersAreInvincible);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, EventAircraft);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, bDisableHUD);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, GameResumed);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, AdditionalViewpoint);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, bParachutesDisabled);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, LastCSVEventName);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, bCanStreamBuildingFoundationsIn);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, AllPlayerTeleportedCount);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, DelayPlayersFromReturningToLobbyData);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, BlockedNativeActions);
    DOREPLIFETIME(AFortAthenaMutator_SpecialEvent, bLockingOnFocalPoint);
}


