#include "FortAthenaMutator_TeamPerformanceMessage.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_TeamPerformanceMessage::AFortAthenaMutator_TeamPerformanceMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
}

void AFortAthenaMutator_TeamPerformanceMessage::SetMessageEnabled(const FName NameIdentifier, const bool bEnabled) {
}

void AFortAthenaMutator_TeamPerformanceMessage::OnTeamScoreChanged(const uint8 TeamId, const int32 NewScore) {
}

void AFortAthenaMutator_TeamPerformanceMessage::OnRep_MessageTriggerReplicated() {
}

void AFortAthenaMutator_TeamPerformanceMessage::OnGoalScoreChanged() {
}

void AFortAthenaMutator_TeamPerformanceMessage::MulticastTriggerMessage_Unreliable_Implementation(const FTeamPerformanceMessageReplication& InMessageTrigger) {
}

void AFortAthenaMutator_TeamPerformanceMessage::MulticastTriggerMessage_Reliable_Implementation(const FTeamPerformanceMessageReplication& InMessageTrigger) {
}

void AFortAthenaMutator_TeamPerformanceMessage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_TeamPerformanceMessage, MessageTriggerReplicated);
}


