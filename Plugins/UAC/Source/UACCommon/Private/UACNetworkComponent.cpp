#include "UACNetworkComponent.h"
#include "Net/UnrealNetwork.h"

UUACNetworkComponent::UUACNetworkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->PlayerID = 0;
}

void UUACNetworkComponent::SendPacketToServer_Implementation(uint8 Type, const TArray<uint8>& Packet) {
}
bool UUACNetworkComponent::SendPacketToServer_Validate(uint8 Type, const TArray<uint8>& Packet) {
    return true;
}

void UUACNetworkComponent::SendPacketToClient_Implementation(uint8 Type, const TArray<uint8>& Packet) {
}

void UUACNetworkComponent::SendClientHello_Implementation(uint32 SessionKey) {
}

void UUACNetworkComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUACNetworkComponent, PlayerID);
}


