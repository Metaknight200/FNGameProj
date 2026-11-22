#include "AthenaAIServicePlayerBots.h"

UAthenaAIServicePlayerBots::UAthenaAIServicePlayerBots() {
    this->CachedBotMutator = NULL;
    this->bBotHostileToHumanPlayersOnly = false;
    this->TagQueryWeightChance = NULL;
    this->BotItemDataTable = NULL;
    this->MaxAroundBotDistanceToSearchPOIToLand = 25000.00f;
    this->LastTeamPlayerStart = NULL;
    this->DeadBotCleanupMinDelay = 5.00f;
    this->CurrentFillingTeam = NULL;
    this->CurrentBotControllerUID = 0;
    this->CachedAIPopulationTracker = NULL;
    this->CachedServerBotManager = NULL;
}

APawn* UAthenaAIServicePlayerBots::SpawnAI(const FVector& InSpawnLocation, const FRotator& InSpawnRotation, const UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList) {
    return NULL;
}

void UAthenaAIServicePlayerBots::OnServerGameMemberRemoved(uint8 InSquadId, uint8 InTeamIndex, AFortPlayerStateAthena* ChangedPS) {
}

void UAthenaAIServicePlayerBots::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void UAthenaAIServicePlayerBots::OnAISpawned(APawn* Pawn, const int32 RequestID) {
}

void UAthenaAIServicePlayerBots::OnAgentGameOver(AFortAthenaAIBotController* AIBotController, AFortPawn* Pawn) {
}

void UAthenaAIServicePlayerBots::KillBots(bool bKillPlayers, bool bKillNoneParticipants, uint8 TeamIndex, AActor* BotOwner) {
}

void UAthenaAIServicePlayerBots::JoinTeam(const AController* SourceTeamController, AController* DestinationTeamController) {
}

bool UAthenaAIServicePlayerBots::IsWeaponSupported(AFortWeapon* FortWeapon) {
    return false;
}


