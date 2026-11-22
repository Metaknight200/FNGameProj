#include "FortAthenaMutator_Heist.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Heist::AFortAthenaMutator_Heist(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->ExitCraftInfo = NULL;
    this->HeistVictorySoundCue = NULL;
    this->bCurrExitCraftDeparted = false;
    this->SpawnExitCraftTime = 0.00f;
    this->CurrExitCraftIndexToSpawn = 0;
    this->SupplyDropStartingAngle = 0.00f;
    this->ExitCraftStartingAngle = 0.00f;
    this->CurrBlingSupplyDropIndexHandled = 0;
    this->NumUnspawnedExitCrafts = -1;
    this->NumSpawnedExitCrafts = 0;
    this->NumDepartedExitCrafts = 0;
    this->JewelsLostToStorm = 0;
    this->SafesLostToStorm = 0;
    this->LastAcquiredEnemyMsgTime = 0.00f;
    this->MinTimeAllowedBetweenAcquiredEnemyMessages = 30.00f;
    this->IconToShowInSquadBar = NULL;
}

void AFortAthenaMutator_Heist::SendPlayerAcquiredMessage(AFortPlayerStateAthena* CarryingPlayerState) {
}

void AFortAthenaMutator_Heist::OnSpecialActorRemoved(const FSpecialActorRepData& SpecialActorData) {
}

void AFortAthenaMutator_Heist::OnSpecialActorAdded(const FSpecialActorRepData& SpecialActorData) {
}

void AFortAthenaMutator_Heist::OnMutatorGenericIntegerUpdated(int32 GenericIntegerIndex, int32 NewIntegerValue) {
}

void AFortAthenaMutator_Heist::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_Heist::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_Heist::OnExitCraftSpawned(AFortAthenaExitCraft* ExitCraft, AFortAthenaExitCraftSpawner* ExitCraftSpawner) {
}

void AFortAthenaMutator_Heist::OnExitCraftIsDestroying(AFortAthenaExitCraft* ExitCraft) {
}

void AFortAthenaMutator_Heist::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Heist, NumUnspawnedExitCrafts);
    DOREPLIFETIME(AFortAthenaMutator_Heist, NumSpawnedExitCrafts);
    DOREPLIFETIME(AFortAthenaMutator_Heist, NumDepartedExitCrafts);
}


