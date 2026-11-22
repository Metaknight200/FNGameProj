#include "FortAthenaMutator_Bodyguard.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Bodyguard::AFortAthenaMutator_Bodyguard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyguardSoundPlayer = NULL;
    this->StartingVIPPlayerStateChangeTrackingGamePhase = EAthenaGamePhase::SafeZones;
    this->MutatorClassToWaitFor = NULL;
    this->CustomCharacterPartsMutator = NULL;
    this->RevealPlayerRole = 0;
}

void AFortAthenaMutator_Bodyguard::UpdateSquadmatesIsReviving(uint8 VIPTeam) {
}

void AFortAthenaMutator_Bodyguard::ShutOffAnyDBNOSounds(const bool bIsDead) {
}

void AFortAthenaMutator_Bodyguard::OnRep_VIPPlayerDataList() {
}

void AFortAthenaMutator_Bodyguard::OnRep_VIPDeathStateList() {
}

void AFortAthenaMutator_Bodyguard::OnRep_RevealPlayerRole() {
}

void AFortAthenaMutator_Bodyguard::NotifyVIPOnTeammateDBNO(uint8 VIPTeam) {
}

void AFortAthenaMutator_Bodyguard::NotifySquadmatesOnVIPTookDamage(uint8 VIPTeam) {
}

bool AFortAthenaMutator_Bodyguard::IsReviving(const AFortPlayerStateAthena* PlayerState) const {
    return false;
}

bool AFortAthenaMutator_Bodyguard::GetTeamVIPPlayerData(const uint8 TeamNum, FBodyguardVIPPlayerData& OutVIPPlayerData) const {
    return false;
}

float AFortAthenaMutator_Bodyguard::GetEnemyVIPsRemainingUIDelay() const {
    return 0.0f;
}

void AFortAthenaMutator_Bodyguard::EndGameShutOffAnyDBNOSounds() {
}

void AFortAthenaMutator_Bodyguard::AssignPlayerRolesForSquads() {
}

void AFortAthenaMutator_Bodyguard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Bodyguard, BodyguardSoundPlayer);
    DOREPLIFETIME(AFortAthenaMutator_Bodyguard, VIPPlayerDataList);
    DOREPLIFETIME(AFortAthenaMutator_Bodyguard, VIPDeathStateList);
    DOREPLIFETIME(AFortAthenaMutator_Bodyguard, RevealPlayerRole);
}


