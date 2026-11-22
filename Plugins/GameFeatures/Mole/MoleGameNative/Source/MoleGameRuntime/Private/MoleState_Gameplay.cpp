#include "MoleState_Gameplay.h"
#include "Net/UnrealNetwork.h"

UMoleState_Gameplay::UMoleState_Gameplay() {
    this->bReplicates = true;
    this->GhostMannequinProxyClass = NULL;
    this->bEmergencyMeetingActive = false;
}

bool UMoleState_Gameplay::RequestEmergencyMeeting(UObject* WorldContext, FMoleEmergencyMeetingData MeetingData) {
    return false;
}

void UMoleState_Gameplay::OnRep_LastSummonedEmergencyMeetingData() {
}

bool UMoleState_Gameplay::IsEmergencyMeetingActive(UObject* WorldContext) {
    return false;
}

void UMoleState_Gameplay::HandleScoreChanged(FEventMessageTag EventChannel, const FMoleTaskScoreEventData& ScoreEventData) {
}

void UMoleState_Gameplay::HandlePlayerStateDied(APlayerState* GhostPlayerState) {
}

void UMoleState_Gameplay::GetAllMoleFreshlyKilledGhosts(UObject* WorldContext, TArray<APlayerState*>& OutFreshlyKilledGhosts) {
}

void UMoleState_Gameplay::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleState_Gameplay, LastSummonedEmergencyMeetingData);
    DOREPLIFETIME(UMoleState_Gameplay, bEmergencyMeetingActive);
}


