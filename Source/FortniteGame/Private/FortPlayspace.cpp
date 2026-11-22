#include "FortPlayspace.h"
#include "Net/UnrealNetwork.h"

AFortPlayspace::AFortPlayspace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSubscribeToMeshNetwork = false;
    this->UserAcceptanceType = EFortPlayspaceUserAcceptanceType::CustomLogic;
    this->ReplicatedStateClass = NULL;
    this->ReplicatedState = NULL;
}

void AFortPlayspace::OnMeshNetworkReady(EMeshNetworkNodeType NodeType) {
}

void AFortPlayspace::OnMeshNetworkEventStart(const FName& EventName, const FDateTime& EventStartTime, const EMeshNetworkNodeType NodeType, const FString& EventParameters) {
}

void AFortPlayspace::OnMeshNetworkEventEnd(const FName& EventName, const EMeshNetworkNodeType NodeType) {
}

void AFortPlayspace::OnMeshNetworkEventChange(const FName& EventName, const FDateTime& EventStartTime, const EMeshNetworkNodeType NodeType, const FString& EventParameters) {
}

void AFortPlayspace::OnMeshNetworkEventBurst(const FName& EventName, const EMeshNetworkNodeType NodeType, const FString& EventParameters) {
}

AFortPlayspaceReplicatedState* AFortPlayspace::GetReplicatedState() {
    return ReplicatedState;
}

void AFortPlayspace::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayspace, ReplicatedState);
}


