#include "FortAthenaMutator_AdHocSquads.h"
#include "FortControllerComponent_AdHocSquads.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_AdHocSquads::AFortAthenaMutator_AdHocSquads(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->MaxAdHocSquadSize = 4;
    this->AdHocSquadsControllerComponentClass = UFortControllerComponent_AdHocSquads::StaticClass();
    this->AdHocSquadDataClass = NULL;
    this->bMaintainSquadDataForNonAdHocSquads = false;
}

bool AFortAthenaMutator_AdHocSquads::SquadUpPlayers(EAdHocSquads_SquadUpResult& OutSquadUpResult, uint8& OutNewSharedSquad, AFortPlayerControllerAthena* SquadUpInstigatorPlayerController, AFortPlayerControllerAthena* SquadUpFollowerPlayerController) {
    return false;
}

void AFortAthenaMutator_AdHocSquads::PlayerSquadInviteEnded(AFortPlayerStateAthena* PlayerStateInviting, const EAdHocSquads_InviteStatus InviteEndedReason) {
}

bool AFortAthenaMutator_AdHocSquads::PlayerInitiatedSquadInvite(const AFortPlayerPawn* InFortPlayerPawn) {
    return false;
}

void AFortAthenaMutator_AdHocSquads::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

bool AFortAthenaMutator_AdHocSquads::IsPlayersSquadFull(const AFortPlayerControllerAthena* PlayerController) const {
    return false;
}

void AFortAthenaMutator_AdHocSquads::HavePlayerLeaveAdHocSquad(AFortPlayerControllerAthena* LeavingPlayerController, const EAdHocSquads_LeaveSquadReason LeaveReason) {
}

void AFortAthenaMutator_AdHocSquads::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_AdHocSquads, InviteDataArray);
}


