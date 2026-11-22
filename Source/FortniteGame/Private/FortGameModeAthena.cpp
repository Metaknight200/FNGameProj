#include "FortGameModeAthena.h"
#include "ESubGame.h"
#include "FortGameStateAthena.h"
#include "FortLiveBroadcastController.h"
#include "FortMutatorListComponent.h"
#include "FortPlayerStateAthena.h"
#include "FortReplaySpectatorAthena.h"
#include "FortServerBotManagerAthena.h"
#include "FortSpectateAFriendController.h"
#include "FortTeamInfoAthena.h"
#include "MegaStormManager.h"
#include "Templates/SubclassOf.h"

AFortGameModeAthena::AFortGameModeAthena(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AFortGameStateAthena::StaticClass();
    this->PlayerStateClass = AFortPlayerStateAthena::StaticClass();
    this->ReplaySpectatorPlayerControllerClass = AFortReplaySpectatorAthena::StaticClass();
    this->bEnableNotifications = false;
    this->bEnableReplicationGraph = true;
    this->GameModeSessionString = TEXT("FORTATHENA");
    this->bContainersForceTossLoot = true;
    this->bOverrideRotationOnRestartPlayer = false;
    this->TeamInfoClass = AFortTeamInfoAthena::StaticClass();
    this->FrameTimeWithoutSleepHistogramBucketsMs.AddDefaulted(7);
    this->GameNetDriverTickFlushCostPerClientBucketsMicroSec.AddDefaulted(6);
    this->DemoNetDriverTickFlushTimeHistogramBucketsMs.AddDefaulted(6);
    this->CPUTimeBuckets.AddDefaulted(6);
    this->CPUPercentPerCoreBuckets.AddDefaulted(9);
    this->ActorsStarvedByClassTimeHistogramBuckets.AddDefaulted(10);
    this->StarvedActorClassList.AddDefaulted(3);
    this->bInitBeaconAtInitGame = false;
    this->bAllowSpectateAfterDeath = true;
    this->VisibilityManagerClass = NULL;
    this->XboxSubsystemNames.AddDefaulted(2);
    this->AssociatedSubGame = ESubGame::Athena;
    this->NumTeams = 100;
    this->DelayForStormCapWarning = 7.00f;
    this->DelayForStormCapDamage = 7.00f;
    this->bMapInfoInitialized = false;
    this->bAllGameplayModifiersRegistered = false;
    this->bAlwaysDBNO = false;
    this->bNeverSpawnPickupsOnPawnDeath = false;
    this->bLoadTestCosmetics = false;
    this->bDisable3DVoiceChat = true;
    this->bAllowDamageInWarmup = true;
    this->bDisableGCOnServerDuringMatch = true;
    this->bPlaylistHotfixChangedGCDisabling = false;
    this->PlaylistHotfixOriginalGCFrequency = -1.00f;
    this->bUseSkydiveLeader = false;
    this->bUseSkydiveLeaderInSplitScreen = true;
    this->OverloadedInitialConnectTimeout = 90.00f;
    this->FailedToStartMatchTimeout = 120.00f;
    this->OrphanedServerCheckTime = 600.00f;
    this->bEnableRecentPlayersUpdates = false;
    this->DefaultWarmupEarlyRequiredPlayerPercent = 0.90f;
    this->bDisableStormCapSystem = false;
    this->bStormCapSystemEnabled = false;
    this->BattleLabTeleporterManager = NULL;
    this->bAlwaysIncludeDisconnectedTeammates = false;
    this->bIncludeDisconnectedTeammatesFromAircraftPhase = true;
    this->ForceKickAfterDeathMode = EForceKickAfterDeathMode::Disabled;
    this->ForceKickAfterDeathTime = 0.00f;
    this->bRemoveFromSquadOnLogout = false;
    this->bIgnoreCanSpectateAfterDeathToken = false;
    this->CreativeModeGracefulShutdownTime = 3600;
    this->MaxPlayerCount = 100;
    this->WarmupRequiredPlayerCount = 0;
    this->WarmupCountdownDuration = 90.00f;
    this->WarmupEarlyCountdownDuration = 15.00f;
    this->bSafeZoneActive = false;
    this->bSafeZonePaused = false;
    this->GE_OutsideSafeZone = NULL;
    this->GE_OutsideSafeZoneCN = NULL;
    this->SafeZoneIndicatorClass = NULL;
    this->MegaStormManagerClass = AMegaStormManager::StaticClass();
    this->SafeZonePhase = 0;
    this->SafeZoneIndicator = NULL;
    this->bSafeZoneLocationsInitialized = false;
    this->EndGameKickPlayersDelay_NoIGMM = 60.00f;
    this->EndGameKickPlayersDelay_IGMM = 120.00f;
    this->EventStatSubmitAttempts = 10;
    this->MegaStormManager = NULL;
    this->bUseRandomTimeOfDay = true;
    this->AISettings = NULL;
    this->ServerBotManagerClass = UFortServerBotManagerAthena::StaticClass();
    this->SpectateAFriendPlayerControllerClass = AFortSpectateAFriendController::StaticClass();
    this->LiveBroadcastPlayerControllerClass = AFortLiveBroadcastController::StaticClass();
    this->PlatformOSSNamesToUploadStatsV2.AddDefaulted(6);
    this->bEnableMatchmakingRatingUpdateV2 = true;
    this->bFlightPathInitialized = false;
    this->ScorePerMinuteAlive = 0.00f;
    this->ScoreMaxMinutesAliveCounted = 0.00f;
    this->ScoreForGettingAtLeastOneKill = 0.00f;
    this->ScorePerScaledTeamKill = 0.00f;
    this->ScoreForFirstRevive = 0.00f;
    this->ScoreForSubsequentRevives = 0.00f;
    this->MaxAdditionalRevivesToScore = 0;
    this->ScoreMultiplier = 0.00f;
    this->MaxActiveAIActors = 350;
    this->bLockMobilePlayersToTouchInSwitchPool = false;
    this->bAllCosmeticsLoaded = false;
    this->SkyDiveContrailLoadTestIndex = 0;
    this->GliderLoadTestIndex = 0;
    this->PickaxeLoadTestIndex = 0;
    this->CharacterLoadTestIndex = 0;
    this->HatLoadTestIndex = 0;
    this->BackpackLoadTestIndex = 0;
    this->DanceLoadTestIndex = 0;
    this->VictoryPoseLoadTestIndex = 0;
    this->MapMarkerLoadTestIndex = 0;
    this->PetLoadTestIndex = 0;
    this->LastSpawnedSupplyDropType = 0;
    this->SpawningPolicyManager = NULL;
    this->ServerBotManager = NULL;
    this->TimeOfDayManagerGameplayOverride = NULL;
    this->MutatorListComponent = CreateDefaultSubobject<UFortMutatorListComponent>(TEXT("MutatorList"));
    this->SupportedAthenaLootTierGroups.AddDefaulted(57);
    this->bEnableCompetitiveMissingPlayerMatchInvalidation = false;
    this->StartAircraftPhaseRequiredAlivePlayersPercent = 0.80f;
    this->EndAircraftPhaseRequiredAlivePlayersPercent = 0.70f;
    this->bEnableCompetitiveDDoSDetectionMatchInvalidation = false;
    this->DDoSDetectionMatchInvalidationCount = 100;
    this->DDoSDetectionMatchInvalidationEvalDurationSeconds = 5.00f;
    this->bReticulateSplineKeysOnStart = false;
}

void AFortGameModeAthena::StopRemovingAllLoot(UObject* WorldContext, bool bImmediateCleanup) {
}

bool AFortGameModeAthena::ShouldForceSpawnInsideOfVolume() const {
    return false;
}

void AFortGameModeAthena::SetTimeOfDayManagerGameplayOverride(TSubclassOf<AFortTimeOfDayManager> TimeOfDayManagerClass) {
}

void AFortGameModeAthena::SafeZoneInsideChecks() {
}

void AFortGameModeAthena::RemoveAllLootFromWorld(UObject* WorldContext, int32 ContainersPerIteration, int32 PickupsPerIteration, float TimeBetweenIterations, bool bProcessContainersAndPickupsConcurrently) {
}

void AFortGameModeAthena::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortGameModeAthena::OnEndGameKickPlayers() {
}

void AFortGameModeAthena::OnCheckForOrphanedServer(bool bFromPlayerLogout) {
}

void AFortGameModeAthena::OnAircraftFlightEnded(AFortAthenaAircraft* FortAthenaAircraft) {
}

void AFortGameModeAthena::OnAircraftExitedDropZone(AFortAthenaAircraft* FortAthenaAircraft) {
}

void AFortGameModeAthena::OnAircraftEnteredDropZone(AFortAthenaAircraft* FortAthenaAircraft) {
}

void AFortGameModeAthena::JumpToSafeZonePhase() {
}

bool AFortGameModeAthena::IsMapInfoInitialized() const {
    return bMapInfoInitialized;
}

void AFortGameModeAthena::HandleAllPlaylistLevelsVisible() {
}

TSubclassOf<AActor> AFortGameModeAthena::GetVehicleClassOverride(TSubclassOf<AActor> DefaultVehicleClass) const {
    return NULL;
}

void AFortGameModeAthena::GetSquadMembers(uint8 SquadId, TArray<AFortPlayerStateAthena*>& SquadMembers) {
}

void AFortGameModeAthena::GetSquadIdsOfNonSolos(TArray<uint8>& SquadsWithNonSolos) {
}

void AFortGameModeAthena::GetSquadIds(TArray<uint8>& SquadIds) {
}

UFortServerBotManagerAthena* AFortGameModeAthena::GetServerBotManager() const {
    return ServerBotManager;
}

bool AFortGameModeAthena::GetPlaylistEnableBots() const {
    return false;
}

AFortGameplayMutator* AFortGameModeAthena::GetMutatorByClass_Implementation(const AActor* ContextActor, TSubclassOf<AFortGameplayMutator> MutatorClass) {
    return NULL;
}

AFortGameplayMutator* AFortGameModeAthena::GetGameplayMutator(FGameplayTag MutatorTag) {
    return NULL;
}

AActor* AFortGameModeAthena::GetBattleLabTeleporterManager() {
    return BattleLabTeleporterManager;
}

void AFortGameModeAthena::FireServerPerformanceEvent() {
}


void AFortGameModeAthena::EnableGameplayMutator(FGameplayTag MutatorTag, bool bEnable) {
}

void AFortGameModeAthena::AddContentKeysToGameState() {
}

void AFortGameModeAthena::AddAIClassToReplicationGraph(TSubclassOf<AFortPawn> NewAIClass) const {
}


