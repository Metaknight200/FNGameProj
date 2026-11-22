#include "FortAthenaMutator_Fill.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Fill::AFortAthenaMutator_Fill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->FloorActorClass = NULL;
    this->LavaFloor = NULL;
}

void AFortAthenaMutator_Fill::OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags) {
}

void AFortAthenaMutator_Fill::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_Fill::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

float AFortAthenaMutator_Fill::GetLavaSupportLevel() const {
    return 0.0f;
}

AAthenaFillFloor* AFortAthenaMutator_Fill::GetLavaFloor() const {
    return LavaFloor;
}

void AFortAthenaMutator_Fill::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Fill, LavaFloor);
}


