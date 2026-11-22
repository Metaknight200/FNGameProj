#include "FortAthenaMutator_SpecialRelevancy.h"
#include "FortReplicationGraphNode_SpecialRelevancy.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFortAthenaMutator_SpecialRelevancy::AFortAthenaMutator_SpecialRelevancy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bNetworkDormantWhenDeactivated = true;
    this->bMutatesGameState = true;
    this->RootGridNodeClass = UFortReplicationGraphNode_SpecialRelevancy::StaticClass();
    this->PlayerPawnClass = NULL;
    this->SpecialRelevancyNode = NULL;
}

void AFortAthenaMutator_SpecialRelevancy::StartSquadRelevancy() {
}

void AFortAthenaMutator_SpecialRelevancy::StartSoloRelevancy() {
}

void AFortAthenaMutator_SpecialRelevancy::StartNormalRelevancy() {
}

void AFortAthenaMutator_SpecialRelevancy::StartMultiSquadRelevancy(int32 NumOfSquadsInRelevancyGroup) {
}

void AFortAthenaMutator_SpecialRelevancy::SpawnActorPerRelevancyGroup(const FSpecialActorSpawnData& NewSpawnData, TArray<AActor*>& SpawnedActors) {
}

void AFortAthenaMutator_SpecialRelevancy::SetClientAuthoritativePhysics(bool bEnabled) {
}

void AFortAthenaMutator_SpecialRelevancy::OnRep_CurrentRelevancyMode(FSpecialRelevancyModeData PrevMode) {
}

void AFortAthenaMutator_SpecialRelevancy::GetRelevantPawnGroups(TArray<FRelevantPawnArray>& RelevantPawns) const {
}

void AFortAthenaMutator_SpecialRelevancy::GetPlayerPawns(TArray<AFortPlayerPawn*>& OutPawns, const int32 RelevancyGroupIndex) const {
}

int32 AFortAthenaMutator_SpecialRelevancy::GetNumRelevancyGroups() const {
    return 0;
}

int32 AFortAthenaMutator_SpecialRelevancy::GetMaxSquadSize() const {
    return 0;
}

void AFortAthenaMutator_SpecialRelevancy::GetActors(TArray<AActor*>& OutActors, const int32 RelevancyGroupIndex, TSubclassOf<AActor> ActorClass) const {
}

bool AFortAthenaMutator_SpecialRelevancy::AreActorsInSameRelvancyGroup(const AActor* Actor0, const AActor* Actor1) const {
    return false;
}

void AFortAthenaMutator_SpecialRelevancy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_SpecialRelevancy, CurrentRelevancyModeData);
}


